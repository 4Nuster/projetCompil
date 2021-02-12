%{
#include "synt.tab.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int i,nbcol;
extern YYSTYPE yylval;

char* precedent,current;

//structure de la table de symbole
typedef struct
{
char NomEntite[20];
char CodeEntite[20];
char TypeEntite[20];
int taille;
int ConstEntite;
} TypeTS;

struct TypeTS21
{
char NomEntite[20];
char CodeEntite[20];
char TypeEntite[20];
int taille;
int ConstEntite;
struct TypeTS21 *suivant;
};

typedef struct TypeTS21 TypeTS2;

typedef struct{
char NomFonction[20];
char ReturnFonction[20];
char parametres[20][20];
int nbParams;
} TypeTF;

TypeTF tf[100];
char temp[50][20];
TypeTS ts[100];
TypeTS2 *ts2, *tete, *prec;
int nbIdfs=0;

int CpTabSym=0;
int CpTabFonc=0;
int CpTabTemp=0;

int rechercheF(char entite[])
{
  int i=0;
  while(i<CpTabFonc){
    if(strcmp(entite,tf[i].NomFonction)==0){
      return i;
    }
  i++;
  }

  return -1;
}

int recherche(char entite[]){
  int i=0;
  while(i<CpTabSym){
    if(strcmp(entite,ts[i].NomEntite)==0){
      return i;
    }
    i++;
  }

  return -1;
}

int recherche2(char entite[]){
    int i=0;
    TypeTS2 *q;
    q=(TypeTS2 *)malloc(sizeof(TypeTS2));
    q=tete;
    while(q!=NULL){
      if(strcmp(entite,q->NomEntite)==0){
        return i;
      }
      q=q->suivant;
      i++;
    }
    return -1;
}

TypeTS2 *getIdf(int s){
  if(s==-1){
    return NULL;
  }
  int i=0;
  TypeTS2 *q;
  q=(TypeTS2 *)malloc(sizeof(TypeTS2));
  q=tete;
  while(i<s){
    q=q->suivant;
    i++;
  }
  return q;
}

int getIdfType(int s){
  TypeTS2 *q;
  q=(TypeTS2 *)malloc(sizeof(TypeTS2));
  q=getIdf(s);
  /*printf("requested type: %s of variable: %s at line: %d\n",q->TypeEntite,q->NomEntite,yylineno);*/
  if(strcmp(q->TypeEntite,"ENTIER")==0){
    return 0;
  }
  else{
    if(strcmp(q->TypeEntite,"REEL")==0){
      return 1;
    }
  }
  return 2;
}

int getIdfConst(int s){
  TypeTS2 *q;
  q=(TypeTS2 *)malloc(sizeof(TypeTS2));
  q=getIdf(s);
  /*printf("requested constant: %d of variable: %s at line: %d\n",q->ConstEntite,q->NomEntite,yylineno);*/
  return q->ConstEntite;
}

void insererTemp(char entite[]){
  strcpy(temp[CpTabTemp],entite);
  CpTabTemp++;
}

void insererF(char entite[], char returned[]){
  int i;
  if(rechercheF(entite)==-1){
    strcpy(tf[CpTabFonc].NomFonction,entite); 
    strcpy(tf[CpTabFonc].ReturnFonction,returned);
    tf[CpTabFonc].nbParams=CpTabTemp;

    for(i=0;i<CpTabTemp;i++){
      strcpy(tf[CpTabFonc].parametres[i],temp[i]);
    }
    
    CpTabFonc++;
    CpTabTemp=0;
  }
  else{
    printf("Erreur Semantique ligne %d colonne %d: double declaration de la fonction: %s\n",yylineno,nbcol,entite);
  }
}

void inserer(char entite[], char code[],char type[],int size,int constantino){
  if( recherche(entite)==-1){
    strcpy(ts[CpTabSym].NomEntite,entite); 
    strcpy(ts[CpTabSym].CodeEntite,code);
    strcpy(ts[CpTabSym].TypeEntite,type);
    ts[CpTabSym].taille=size;
    ts[CpTabSym].ConstEntite=constantino;

    CpTabSym++;
  }
  else{
    printf("Erreur Semantique ligne %d colonne %d: double declaration de la variable: %s\n",yylineno,nbcol,entite);
  }
}

void inserer2(char entite[], char code[],char type[],int size,int constantino){
    if(recherche2(entite)==-1){
      ts2=(TypeTS2 *)malloc(sizeof(TypeTS2));
      strcpy(ts2->NomEntite,entite); 
      strcpy(ts2->CodeEntite,code);
      strcpy(ts2->TypeEntite,type);
      ts2->taille=size;
      ts2->ConstEntite=constantino;
      ts2->suivant=NULL;
      if(nbIdfs==0){
        tete=ts2;
      }
      else{
        prec->suivant=ts2;
      }
      prec=ts2;
      nbIdfs++;
    }
    else{
      printf("Erreur Semantique ligne %d colonne %d: double declaration de la variable: %s\n",yylineno,nbcol,entite);
    }
}

void afficherF()
{
printf("\n/***************Table des fonctions ******************/\n");
printf("________________________\n");
printf("\t| NomFonction |  ReturnFonction  |  nbParams  |  Parametres \n");
printf("________________________\n");
int i=0,j;
  while(i<CpTabFonc)
  {
    printf("\t| %12s| %17s| %11d| ",tf[i].NomFonction, tf[i].ReturnFonction, tf[i].nbParams);
    for(j=0;j<tf[i].nbParams;j++){
      printf("%2s,",tf[i].parametres[j]);
    }
    printf("\n");
    i++;
   }
}

void afficher()
{
printf("\n/***************Table des symboles ******************/\n");
printf("________________________\n");
printf("\t| NomEntite |  CodeEntite  |  TypeEntite  |  Taille  |  Constant \n");
printf("________________________\n");
int i=0;
  while(i<CpTabSym)
  {
    printf("\t| %10s| %13s| %13s| %9d| %8d\n",ts[i].NomEntite, ts[i].CodeEntite, ts[i].TypeEntite, ts[i].taille, ts[i].ConstEntite);
     i++;
   }
}

void afficher2(){
  printf("\n/***************Table des symboles ******************/\n");
  printf("________________________\n");
  printf("\t| NomEntite |  CodeEntite  |  TypeEntite  |  Taille  |  Constant \n");
  printf("________________________\n");
  int i=0;
  TypeTS2 *q;
  q=(TypeTS2 *)malloc(sizeof(TypeTS2));
  q=tete;
  while(i<nbIdfs){
    printf("\t| %10s| %13s| %13s| %9d| %8d\n",q->NomEntite, q->CodeEntite, q->TypeEntite, q->taille, q->ConstEntite);
    q=q->suivant;
    i++;
  }
}

void yyerror(char *s){
    printf("Erreur syntaxique a la ligne %d colonne %d: %s\n",yylineno,nbcol,yytext);
}

int getTableSize(char* entite){
  int i;
  for(i=0;i<100;i++){
    if(strcmp(entite,ts[i].NomEntite)==0){
      return ts[i].taille;
    }
  }
}

int getTableSize2(char* entite){
  int i;
  TypeTS2 *q;
  q=(TypeTS2 *)malloc(sizeof(TypeTS2));
  q=tete;
  for(i=0;i<nbIdfs;i++){
    if(strcmp(entite,q->NomEntite)==0){
      return q->taille;
    }
    q=q->suivant;
  }
}

void fixer(char *type, int constantino){
  int i;
  for(i=0;i<100;i++){
    if(ts[i].TypeEntite[0]=='n'){strcpy(ts[i].TypeEntite,type);}
    if(ts[i].ConstEntite==2){ts[i].ConstEntite=constantino;}
  }
}

void fixer2(char *type, int constantino){
  int i;
  TypeTS2 *q;
  q=(TypeTS2 *)malloc(sizeof(TypeTS2));
  q=tete;
  for(i=0;i<nbIdfs;i++){
    if(q->TypeEntite[0]=='n'){strcpy(q->TypeEntite,type);}
    if(q->ConstEntite==2){q->ConstEntite=constantino;}
    q=q->suivant;
  }
}

%}

%option yylineno

lettre [a-zA-Z]
chiffre [0-9]
IDF {lettre}({lettre}|{chiffre}|_){0,11}
cst {chiffre}+
commentaire "/*"((("*"[^/])?)|[^*])*"*/"
chainet \"[^"]*\"
entiert [+-]{cst}
reelt ([+-]|""){cst}","{cst}
%%

{commentaire}
$$include {
  nbcol+=yyleng;
  return include;
}
InOut {
  nbcol+=yyleng;
  return InOut;
}
Arithme {
  nbcol+=yyleng;
  return Arithme;
}
ALGORITHME {
  nbcol+=yyleng;
  return algo;
}
VAR {
  nbcol+=yyleng;
  return var;
}
CONST {
  nbcol+=yyleng;
  return mc_const;
}
DEBUT {
  nbcol+=yyleng;
  return deb;
}
FIN {
  nbcol+=yyleng;
  return fin;
}
FONCTION {
  nbcol+=yyleng;
  return fonction;
}
REEL   {
  nbcol+=yyleng;
  yylval.chainettt=strdup(yytext); 
  return reel;
}
ENTIER {
  nbcol+=yyleng;
  yylval.chainettt=strdup(yytext);
  return entier;
}
CHAINE {
  nbcol+=yyleng;
  yylval.chainettt=strdup(yytext); 
  return chaine;
}
TANTQUE {
  nbcol+=yyleng;
  return tantque;
}
FAIRE {
  nbcol+=yyleng;
  return faire;
}
FAIT {
  nbcol+=yyleng;
  return fait;
}
ECRIRE {
  nbcol+=yyleng;
  return ecrire;
}
LIRE {
  nbcol+=yyleng;
  return lire;
}
"RETURN" {
  nbcol+=yyleng;
  return retu;
}
{cst}     {
  nbcol+=yyleng;
  yylval.entierttt=atoi(yytext);
  return cst;
}
{entiert} {
  nbcol+=yyleng;
  yylval.entierttt=atoi(yytext);  
  return entiertt;
}
{reelt}   {
  nbcol+=yyleng;
  for(i=0;i<yyleng;i++){
    if(yytext[i]==','){
      yytext[i]='.';
      break;
    }
  }
  yylval.reelttt=atof(yytext);     
  return reeltt;
}
{chainet} {
  nbcol+=yyleng;
  yylval.chainettt=strdup(yytext); 
  return chainett;
}
{IDF}     {
  nbcol+=yyleng;
  yylval.chainettt=strdup(yytext); 
  return idf;
}
:= {
  nbcol+=yyleng;
  return aff;
}
"=" {
  nbcol+=yyleng;
  return egale;
}
# {
  nbcol+=yyleng;
  return pvg;
}
"+" {
  nbcol+=yyleng;
  return oplus;
}
"-" {
  nbcol+=yyleng;
  return ominus;
}
"*" {
  nbcol+=yyleng;
  return omultiply;
}
"|" {
  nbcol+=yyleng;
  return odivide;
}
"!" {
  nbcol+=yyleng;
  return excla;
}
"[" {
  nbcol+=yyleng;
  return ocro;
}
"]" {
  nbcol+=yyleng;
  return ccro;
}
"(" {
  nbcol+=yyleng;
  return op;
}
")" {
  nbcol+=yyleng;
  return cp;
}
\>\n {
  nbcol=0;
  return asghar2;
}
"<" {
  nbcol+=yyleng;
  return akbar;
}
\> {
  nbcol+=yyleng;
  return asghar;
}
":" {
  nbcol+=yyleng;
  return dp;
}
"." {
  nbcol+=yyleng;
  return vg;
}
[ \t] nbcol+=yyleng; 
\n nbcol=0;
. printf("erreur lexicale a la ligne %d colonne %d: caractere inconnu: %s \n",yylineno,nbcol,yytext);

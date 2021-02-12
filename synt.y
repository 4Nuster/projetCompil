%{
	#include<stdlib.h>
	#include<stdio.h>
	#include<string.h>

	typedef struct{
		char NomEntite[20];
		char CodeEntite[20];
		char TypeEntite[20];
		int taille;
		int ConstEntite;
	} TypeTS;

	typedef struct{
		char NomFonction[20];
		char ReturnFonction[20];
		char parametres[20][20];
		int nbParams;
	} TypeTF;

	extern int yylineno;
	extern TypeTS ts[100];
	extern TypeTF tf[100];
	extern int CpTabTemp;
	extern int nbcol;
	
	char ayylmao[3][20];
	int arithmeToggled,inOutToggled;

	char temparams[50][20];
	int temparamsSize;
	int indexF;

	char expectedReturn[20];
	char expectedAffect[20];
	char ReturnFonct[20];
	char actual[20];
	char actual2[20];
%}
%token <chainettt>idf <entierttt>cst aff pvg algo var mc_const vg deb fin dp 
		<chainettt>entier <chainettt>chaine <chainettt>reel akbar asghar asghar2
		include InOut Arithme 
		op cp ocro ccro fonction
		tantque faire fait egale ecrire lire retu 
		excla oplus ominus omultiply odivide
		<entierttt>entiertt <reelttt>reeltt <chainettt>chainett
%locations
%union{
	int   entierttt;
	char* chainettt;
	float reelttt;
}
%%
S: {
	strcpy(actual,"empty");
} INCLUDE algo idf var FONCTION LISTE_DEC {
	strcpy(expectedReturn,"empty");
} CORPS {
	printf("seikai syntakkusu desu");YYACCEPT;
}
;

INCLUDE: include akbar InOut asghar2 include akbar Arithme asghar2 {
	arithmeToggled=1;inOutToggled=1;
}
		|include akbar Arithme asghar2 include akbar InOut asghar2 {
	arithmeToggled=1;inOutToggled=1;
}
		|include akbar InOut asghar2 {
	arithmeToggled=0;inOutToggled=1;
}
		|include akbar Arithme asghar2 {
	arithmeToggled=1;inOutToggled=0;
}
		| {
	arithmeToggled=0;inOutToggled=0;
}
;

FONCTION: fonction idf op PARAMS cp dp entier {strcpy(expectedReturn,$7);} var LISTE_DEC CORPS pvg {
	if(strcmp(expectedReturn,"empty")!=0){
		printf("Erreur Semantique ligne %d colonne %d : expected return pour la fonction : %s\n",yylineno,nbcol,$2);
	}
	insererF($2,$7);
} FONCTION
		| fonction idf op PARAMS cp dp reel {strcpy(expectedReturn,$7);} var LISTE_DEC CORPS pvg {
	if(strcmp(expectedReturn,"empty")!=0){
		printf("Erreur Semantique ligne %d colonne %d : expected return pour la fonction : %s\n",yylineno,nbcol,$2);
	}
	insererF($2,$7);
} FONCTION
		| fonction idf op PARAMS cp dp chaine {strcpy(expectedReturn,$7);} var LISTE_DEC CORPS pvg {
	if(strcmp(expectedReturn,"empty")!=0){
		printf("Erreur Semantique ligne %d colonne %d : expected return pour la fonction : %s\n",yylineno,nbcol,$2);
	}
	insererF($2,$7);
} FONCTION
		|
;

PARAMS: idf dp entier vg {insererTemp($3);} PARAMS2
		| idf dp reel vg {insererTemp($3);} PARAMS2
		| idf dp chaine vg {insererTemp($3);} PARAMS2
		| 
;

PARAMS2:idf dp entier vg {insererTemp($3);} PARAMS2
		| idf dp reel vg {insererTemp($3);} PARAMS2
		| idf dp chaine vg {insererTemp($3);} PARAMS2
		| idf dp entier {insererTemp($3);}
		| idf dp reel {insererTemp($3);}
		| idf dp chaine {insererTemp($3);}
;

LISTE_DEC: DEC LISTE_DEC 
        |
;	

DEC: LISTE_IDFS dp entier pvg {fixer2($3,0);}
	| LISTE_IDFS dp reel pvg {fixer2($3,0);}
	| LISTE_IDFS dp chaine pvg {fixer2($3,0);}
	| mc_const LISTE_IDFS dp entier pvg {fixer2($4,1);}
	| mc_const LISTE_IDFS dp reel pvg {fixer2($4,1);}
	| mc_const LISTE_IDFS dp chaine pvg {fixer2($4,1);}
;
LISTE_IDFS: idf vg LISTE_IDFS {inserer2($1,"idf","nigger",1,2);}
           | idf {inserer2($1,"idf","nigger",1,2);}
		   | idf ocro cst ccro vg LISTE_IDFS {inserer2($1,"idf","nigger",$3,2);}
		   | idf ocro cst ccro {inserer2($1,"idf","nigger",$3,2);}
;

CORPS:deb LISTE_INSTS fin
;
AFFECTATION: idf {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		strcpy(expectedAffect,ayylmao[getIdfType(recherche2($1))]);
		if(getIdfConst(recherche2($1))){
			printf("Erreur Semantique ligne %d colonne %d : affectation dans le constant : %s\n",yylineno,nbcol,$1);
		}
	}
} aff COND_PARAM pvg {
	if(strcmp(expectedAffect,actual)!=0){
		printf("expected %s but %s \n",expectedAffect,actual);
		printf("Erreur Semantique ligne %d colonne %d : incompatible types of : %s and the affected value\n",yylineno,nbcol,$1);
	}
}
			| idf ocro cst ccro {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		if($3 > getTableSize2($1)){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,$1);
		}
		strcpy(expectedAffect,ayylmao[getIdfType(recherche2($1))]);
		if(getIdfConst(recherche2($1))){
			printf("Erreur Semantique ligne %d colonne %d : affectation dans le constant : %s\n",yylineno,nbcol,$1);
		}
	}
} aff COND_PARAM pvg {
	if(strcmp(expectedAffect,actual)!=0){
		printf("expected %s but %s \n",expectedAffect,actual);
		printf("Erreur Semantique ligne %d colonne %d : incompatible types of %s and the affected value\n",yylineno,nbcol,$1);
	}
}
;
EXP: NIQUEL OPERAND NIQUEL2
	| op NIQUEL OPERAND NIQUEL2 cp
;

NIQUEL: idf {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2($1))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2($1))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,$1);
			}
		}
	}
}
		| idf ocro cst ccro {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		if($3 > getTableSize2($1)){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,$1);
		}
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2($1))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2($1))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,$1);
			}
		}
	}
}
		| reeltt {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"REEL");
	}
	else{
		if(strcmp(actual,"REEL")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %f est incompatible avec l'instruction\n",yylineno,nbcol,$1);
		}
	}
}
		| entiertt {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,$1);
		}
	}	
}
		| cst {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,$1);
		}
	}
}
		| NMF {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,ReturnFonct);
	}
	else{
		if(strcmp(actual,ReturnFonct)!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de return de la fonction %s est incompatible avec l'instruction\n",yylineno,nbcol,tf[indexF].NomFonction);
		}
	}
}
;
NIQUEL2: idf {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2($1))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2($1))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,$1);
			}
		}
	}
}
		| idf ocro cst ccro {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		if($3 > getTableSize2($1)){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,$1);
		}
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2($1))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2($1))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,$1);
			}
		}
	}
}
		| reeltt {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"REEL");
	}
	else{
		if(strcmp(actual,"REEL")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %f est incompatible avec l'instruction\n",yylineno,nbcol,$1);
		}
	}
}
		| entiertt {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,$1);
		}
	}	
}
		| cst {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,$1);
		}
	}
}
		| EXP {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
}
		| NMF {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,ReturnFonct);
	}
	else{
		if(strcmp(actual,ReturnFonct)!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de return de la fonction %s est incompatible avec l'instruction\n",yylineno,nbcol,tf[indexF].NomFonction);
		}
	}
}
;
OPERAND: oplus
		| ominus
		| omultiply
		| odivide
;
BOUCLE: tantque op COND cp faire {strcpy(actual,"empty");} LISTE_INSTS fait pvg
;
COND: COND_PARAM OP_PARAM {strcpy(actual2,actual);} COND_PARAM {
	if(strcmp(actual2,actual)!=0){
		printf("Erreur Semantique ligne %d colonne %d : parametres incorrectes pour la condition\n",yylineno,nbcol);
	}
}
;
OP_PARAM: egale egale
		| excla egale
		| asghar egale
		| akbar egale
		| akbar
		| asghar
;

COND_PARAM: idf {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		strcpy(actual,ayylmao[getIdfType(recherche2($1))]);
	}
}
	| idf ocro cst ccro {
	if(recherche2($1)==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		if($3 > getTableSize2($1)){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,$1);
		}
		strcpy(actual,ayylmao[getIdfType(recherche2($1))]);
	}
}
	| EXP {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
}
	| cst {
	strcpy(actual,"ENTIER");
}
	| entiertt {
	strcpy(actual,"ENTIER");
}
	| reeltt {
	strcpy(actual,"REEL");
}
	| chainett {
	strcpy(actual,"CHAINE");
}
	| NMF {
	strcpy(actual,ReturnFonct);
}
;
LISTE_COND_PARAM: COND_PARAM {
	strcpy(actual,"empty");
} vg LISTE_COND_PARAM
				| COND_PARAM {
	strcpy(actual,"empty");
}
;
LIRE: lire op LISTE_COND_PARAM cp pvg {
	if(!inOutToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque InOut n'est pas incluse pour la fonction LIRE\n",yylineno,nbcol);
	}
}
;
ECRIRE: ecrire op LISTE_COND_PARAM cp pvg {
	if(!inOutToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque InOut n'est pas incluse pour la fonction ECRIRE\n",yylineno,nbcol);
	}
}
;
LISTE_IDFS_NMF: idf vg {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]); 
	temparamsSize++;
} LISTE_IDFS_NMF2
			| idf {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]); 
	temparamsSize++;
}
		   	| idf ocro cst ccro vg {
	if($3 > getTableSize2($1)){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,$1);
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]); 
	temparamsSize++;
} LISTE_IDFS_NMF2
			| idf ocro cst ccro {
	if($3 > getTableSize2($1)){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table : %s\n",yylineno,nbcol,$1);
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]);
	temparamsSize++;
} 
			| EXP {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
} vg LISTE_IDFS_NMF2
			| EXP {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
}	
			| cst vg {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
} LISTE_IDFS_NMF2
			| cst {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
}
			| entiertt vg {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
} LISTE_IDFS_NMF2
			| entiertt {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
}
			| reeltt vg {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
} LISTE_IDFS_NMF2
			| reeltt {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
}
			| chainett vg {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
} LISTE_IDFS_NMF2
			| chainett {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
}
		   	| NMF vg {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
} LISTE_IDFS_NMF2
			| NMF {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
}
			|
;
LISTE_IDFS_NMF2: idf vg {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]);
	temparamsSize++;
} LISTE_IDFS_NMF2
           | idf {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]);
	temparamsSize++;
}
		   | idf ocro cst ccro vg {
	if($3 > getTableSize2($1)){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,$1);
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]);
	temparamsSize++;
} LISTE_IDFS_NMF2
		   | idf ocro cst ccro {
	if($3 > getTableSize2($1)){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table : %s\n",yylineno,nbcol,$1);
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2($1))]);
	temparamsSize++;
}
			| EXP vg {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
}LISTE_IDFS_NMF2
			| EXP {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
}
			| cst vg {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
} LISTE_IDFS_NMF2
			| cst {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
}
			| entiertt vg {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
} LISTE_IDFS_NMF2
			| entiertt {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
}
			| reeltt vg {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
} LISTE_IDFS_NMF2
			| reeltt {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
}
			| chainett vg {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
} LISTE_IDFS_NMF2
			| chainett {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
}
			| NMF vg {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
} LISTE_IDFS_NMF2
			| NMF {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
}
;
NMF: idf {
	if(rechercheF($1)==-1){
		printf("Erreur Semantique ligne %d colonne %d : la fonction %s n'est pas declare\n",yylineno,nbcol,$1);
	}
	else{
		indexF=rechercheF($1);
		temparamsSize=0;
	}
} op LISTE_IDFS_NMF cp {
	int i;
	if(temparamsSize!=tf[indexF].nbParams){
		printf("Erreur Semantique ligne %d colonne %d : parameters don't match with the fonction %s (size issue)\n",yylineno,nbcol,$1);
	}
	else{
		for(i=0;i<temparamsSize;i++){
			if(strcmp(temparams[i],tf[indexF].parametres[i])!=0){
				printf("expected %s but got %s\n",tf[indexF].parametres[i],temparams[i]);
				printf("Erreur Semantique ligne %d colonne %d : parameters don't match with the fonction %s (type issue)\n",yylineno,nbcol,$1);
			}
		}
	}
	strcpy(ReturnFonct,tf[indexF].ReturnFonction);
}
;
RETURN: retu COND_PARAM pvg {
	if(strcmp(expectedReturn,actual)!=0){
		printf("expected %s but %s \n",expectedReturn,actual);
		printf("Erreur Semantique ligne %d colonne %d : le type de la valeur retourne est incompatible avec le type de retourne de la fonction\n",yylineno,nbcol);
	}
	strcpy(expectedReturn,"empty");
}
;
LISTE_INSTS: AFFECTATION {
	strcpy(actual,"empty");
} LISTE_INSTS
			| LIRE {
	strcpy(actual,"empty");
} LISTE_INSTS
			| ECRIRE {
	strcpy(actual,"empty");
} LISTE_INSTS
			| RETURN {
	strcpy(actual,"empty");
} LISTE_INSTS
			| NMF pvg {
	strcpy(actual,"empty");
} LISTE_INSTS
			| BOUCLE {
	strcpy(actual,"empty");
} LISTE_INSTS
			|
;
%%
#include <stdlib.h>
#include <stdio.h>

main() {
	strcpy(ayylmao[0],"ENTIER");
	strcpy(ayylmao[1],"REEL");
	strcpy(ayylmao[2],"CHAINE");
	
	yyparse();
	
	afficher2();
	printf("\n");
	afficherF();
}
yywrap()
{}

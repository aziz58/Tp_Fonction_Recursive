#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main(){
	int n ;
	while(1){
	printf("====================================================\n");
	printf("saisissez un nombre pour me servir de tester mes fonctions \n");
	printf(" number = \n");
	scanf("%d",	&n);
	printf("factorielle de %d est : %d\n",n,fact(n));
	printf("fibonacci(%d) = %d \n",n,fibonacci(n));
	printf("la somme de tout les entiers entre 1 et %d est : %d\n",n,som(n));
	printf("====================================================\n");
	}
	return 0;
}

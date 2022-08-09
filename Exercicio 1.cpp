//Fernando Reinaldo & Nicolas Scudiero
//1. Leia uma matriz 4 x 4 de número inteiros, conte e escreva quantos valores maiores que 10 ela possui. 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 4

int teste (int num[MAX][MAX]){	
	int i, j, cont=0;
	for (i=0;i<MAX;i++){
		for (j=0;j<MAX;j++){
			if (num[i][j] > 10){
				cont++;
			}	
		}
	}
	printf ("A matriz possue %d valores maiores que 10", cont);
}

int lermatriz (int num[MAX][MAX]){
	int i, j;
	for (i=0;i<MAX;i++){
		for (j=0;j<MAX;j++){
			printf ("Informe o numero da matriz [%d] [%d] ", i,j);
			scanf ("%d", &num[i][j]);
		}
	}
}



int main(void){
	int num[MAX][MAX];
	lermatriz (num);
	teste(num);
}

//Fernando Reinaldo & Nicolas Scudiero
//7. Gerar e imprimir uma matriz de tamanho 4 x 4, onde seus elementos são da forma:
//A[i][j] = 2i + 7j - 2 se i < j;
//A[i][j] = 3i - 1 se i = j;
//A[i][j] = 4i - 5j + 1 se i > j.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 4
int gera ();
int imprime ();


int imprime (int num[MAX][MAX]){
	int i,j;
	printf ("***A MATRIZ GERADA E***");
	for (i=0; i<MAX;i++){
		for (j=0; j<MAX; j++){
			printf ("\n[%d] [%d] %d", i,j,num[i][j]);
		}
	}
}


int gera (int num[MAX][MAX]){
	int i,j;
	for (i=0; i<MAX;i++){
		for (j=0; j<MAX; j++){
			if (i < j){
				num[i][j] = (2*i) + (7*j) - 2;
			}else if (i == j){
				num[i][j] = (3*i) - 1; 
			}else{
				num[i][j] = (4*i) - (5*j) + 1;
			}
		}
	}
}


int main (void){
	int num[MAX][MAX];
	gera (num);
	imprime (num);
	
}

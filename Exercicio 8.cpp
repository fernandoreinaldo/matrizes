//Fernando Reinaldo & Nicolas Scudiero
//8. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
int lermatriz ();
int imprime ();
int testa_soma ();


int testa_soma (int num[MAX][MAX]){
	int i,j;
	int valor;
	for (i=0;i<MAX;i++){
		for (j=0; j<MAX;j++){
			if (i < j){
				valor = num[i][j] + valor;
			}
		}
	}
	printf ("\nA soma dos valores acima da diagonal principal e %d", valor);
}

int imprime (int num[MAX][MAX]){
	int i,j;
	printf ("***MATRIZ***");
	for (i=0; i<MAX;i++){
		for (j=0; j<MAX; j++){
			printf ("\n[%d] [%d] %d", i,j,num[i][j]);
		}
	}
}


int lermatriz (int num[MAX][MAX]){
	int i,j;
	for (i=0;i<MAX;i++){
		for (j=0; j<MAX;j++){
			printf ("Digite o numerdo da matriz [%d] [%d]", i,j);
			scanf ("%d", &num[i][j]);
		}
	}
}


int main (void){
	int num[MAX][MAX];
	lermatriz (num);
	imprime (num);
	testa_soma (num);
	
} 

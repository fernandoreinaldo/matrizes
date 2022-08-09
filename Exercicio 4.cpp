//Fernando Reinaldo & Nicolas Scudiero
//4. Leia uma matriz 4 x 4, imprima a matriz e a localização (linha e coluna) do maior valor. 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 4

int teste (int num[MAX][MAX], int *maior){
	int i,j, linha=0, coluna=0;
	for (i=0;i<MAX;i++){
		for (j=0;j<MAX;j++){
			if (num[i][j] > *maior){
				linha = i;
				coluna = j;
				*maior = num[i][j];
			}
		}
	}
	
	printf ("O maior valor e %d e ele esta na linha %d coluna %d", *maior, linha, coluna);
}


int lermatriz (int num[MAX][MAX]){
	int i,j;
	for (i=0;i<MAX;i++){
		for (j=0;j<MAX;j++){
			printf ("Digite o numero da matriz [%d] [%d] ", i,j);
			scanf ("%d", &num[i][j]);
		}
	}
}



int main (void){
	int maior=0;
	int num[MAX][MAX];
	lermatriz (num);
	maior = num[0][0];
	teste (num, &maior);
	
}


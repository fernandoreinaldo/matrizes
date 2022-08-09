//Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 de números inteiros.
//Em seguida, gere um array unidimensional (vetor) pela soma dos números de cada coluna da matriz e mostre na tela esse array.
//Por exemplo, a matriz:
//8     -2       1

//2      2       5

//1      5       3

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3


int lermatriz(int m[MAX][MAX]);
int vetor(int m[MAX][MAX]);

int main(void){
	int m[MAX][MAX];
	lermatriz(m);
	vetor(m);
}

int lermatriz(int m[MAX][MAX]){
	int i,j,vet[MAX];
	for(i=0 ; i<MAX ; i++){
		for(j=0 ; j<MAX ; j++){
			printf("Digite o valor da matriz na posicao [%d][%d] ", i+1,j+1);
			scanf("%d", &m[i][j]);
		}
		vet[i]=0;
	}
}

int vetor(int m[MAX][MAX]){
	int i,j,vet[MAX];
	for(j=0 ; j<MAX ; j++){
		for(i=0 ; i<MAX ; i++){
			vet[j]=vet[j]+m[i][j];
		}
	}
	
	for(i=0 ; i<MAX ; i++){
		printf(" %d ", vet[i]);
	}
	return 0;
}

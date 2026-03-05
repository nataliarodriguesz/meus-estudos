// Exercício 04:
//   Dada uma matriz 5x5, elabore um algoritmo que imprima:
//   A diagonal principal
//   A diagonal secundária
//   A soma da linha 4
//   A soma da coluna 2
//  Tudo, exceto a diagonal principal

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencherMatriz(int matriz[][5]){
	int x, y;
	for(x=0; x<5; x++){
		for(y=0; y<5; y++){
			matriz[x][y] = rand()%100;
		}
	}
}

void mostrarMatriz(int matriz[][5]){
	int x, y;
	for(x=0; x<5; x++){
		for(y=0; y<5; y++){
			printf("%4d", matriz[x][y]);
		}
		printf("\n");
	}	
}

void diagonalPrincipal(int matriz[][5]){
	int x;
	printf("\nMatriz Principal:  ");
	for(x=0; x<5; x++){
		printf("%4d", matriz[x][x]);
	}	
}

void diagonalSecundaria(int matriz[][5]){
	int x;
	printf("\nMatriz Secundária: ");
	for(x=0; x<5; x++){
		printf("%4d", matriz[x][4-x]);
	}
}

void somarLinha(int matriz[][5], int linha){
	int y, soma=0;
	printf("\nSoma da linha %d:   ", linha);
	for(y=0; y<5; y++){
		printf("%4d", matriz[linha][y]);
		soma += matriz[linha][y];
	}
	printf(" = %d", soma);
}

void somarColuna(int matriz[][5], int coluna){
	int x, soma=0;
	printf("\nSoma da coluna %d:  ", coluna);
	for(x=0; x<5; x++){
		printf("%4d", matriz[x][coluna]);
		soma += matriz[x][coluna];
	}
	printf(" = %d", soma);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int matriz[5][5];
		
	preencherMatriz(matriz);
	mostrarMatriz(matriz);
	diagonalPrincipal(matriz);
	diagonalSecundaria(matriz);
	somarLinha(matriz, 3);
	somarColuna(matriz, 1);
	printf("\n\n");
	
	system("pause");
	return 0;
}

// Exercício 02:
//   Faça um programa que multiplica uma matriz 3 x 3 de inteiros
//   por um escalar k e imprima o resultado na tela. O usuário deve 
//   fornecer os valores da matriz e de k.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencherMatriz(int matriz[][3]){
	int x, y;
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("Digite o valor da posição[%d][%d]: ", x, y);
			scanf("%d", &matriz[x][y]);	
		}
	}
}

void mostrarMatriz(int matriz[][3]){
	int x, y;
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("%4d", matriz[x][y]);
		}
		printf("\n");
	}	
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int matriz[3][3];
	
	preencherMatriz(matriz);
	printf("\n Matriz: \n");
	mostrarMatriz(matriz);

	system("pause");
	return 0;	
}

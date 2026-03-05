// Exercício 01:
//   Construa um algoritmo que efetue e apresente o resultado dasomaentreduasmatrizes 3 x 5. 
//   Inicialize a matriz com valores quaisquer e imprimaoresultadona tela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirMatriz(int matriz[3][5], int l, int c){
	int x, y;
	for(x=0; x<l; x++){
		for(y=0; y<c; y++){
			printf("%4d", matriz[x][y]);
		}
		printf("\n");
	}
}

void somarMatrizes(int matrizA[3][5], int matrizB[3][5], int matrizSoma[3][5]){
	int x, y;
	for(x=0; x<3; x++){
		for(y=0; y<5; y++){
			matrizSoma[x][y] = matrizA[x][y] + matrizB[x][y];
		}
	}		
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int matrizA[3][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15} };
	int matrizB[3][5] = { {5,4,3,2,1}, {10,9,8,7,6}, {15,14,13,12,11} };
	int matrizSoma[3][5];
	
	somarMatrizes(matrizA, matrizB, matrizSoma);
	printf("Resultado da soma de matrizes: \n\n");
	imprimirMatriz(matrizSoma, 3, 5);
	
	system("pause");
	return 0;
}

// Exercício 03:
//   Leia uma matriz 20 x 20. Leia também um valor X. O programa
//   deverá fazer uma busca desse valor na matriz e, ao final escrever
//   a localização(linhaecoluna) ou uma mensagem de “não encontrado”.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int linha = -1, coluna = -1;

void preencherMatriz(int matriz[][20]){
	int x, y;
	for(x=0; x<20; x++){
		for(y=0; y<20; y++){
			printf("Digite o valor da posição[%d][%d]: ", x, y);
			scanf("%d", &matriz[x][y]);	
		}
	}
}

void mostrarMatriz(int matriz[][20]){
	int x, y;
	for(x=0; x<20; x++){
		for(y=0; y<20; y++){
			printf("%4d", matriz[x][y]);
		}
		printf("\n");
	}	
}

void buscarMatriz(int pes, int matriz[][20]){
	int x,y;
	for(x=0; x<20; x++){
		for(y=0; y<20; y++){
			if(pes == matriz[x][y]){
				linha = x;
				coluna = y;
			}
		}
	}	
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int matriz[20][20];
	int pes;
	
	preencherMatriz(matriz);
	system("cls");
	mostrarMatriz(matriz);
	
	printf("\nDigite o número que deseja buscar: ");
	scanf("%d", &pes);
	buscarMatriz(pes, matriz);
	
	if(linha != -1 && coluna != -1){
		printf("\nValor encontrado na posição [%d][%d]\n", linha, coluna);
	}else{
		printf("\nO valor %d não existe no vetor\n", pes);
	}
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int m[5][5];

//preencher matriz
void preencherMatriz(){
	int x,y;
	
	for(x=0; x<=4; x++){
	   for(y=0; y<=4; y++){
	   	   m[x][y] = rand()%51;
	   }	
	}	
}

//somar todos os elementos da matriz
int somarMatriz(){
	int x, y, soma=0;
	
	for(x=0; x<=4; x++){
	   for(y=0; y<=4; y++){
	   	   soma += m[x][y];
	   }	
	}
	return soma;
}

//montar diagonal principal
int montarDP(){
	int vetor[5]
	int x;
	
	for(x=0; x<=4; x++){
		vetor[x] = m[x][x];
	}
	return vetor;
}

//montar diagonal secundária
int montarDS(){
	int vetor[5]
	int x;
	
	for(x=0; x<=4; x++){
		vetor[x] = m[x][x-4];
	}
	return vetor;
}


//mostrar diagonal 
void mostrarDiagonal(int vetor[]){
	int x;
	for(x=0; x<=5; x++){
		printf("%2d    ", vetor[x]);
	}
}


int main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int m[5][5];
	int mDP[5];
	int mDS[5];
	
	preencherMatriz();
	mDP = montarDP();
	mDS = montarDS();
	
	printf("\nSoma dos elementos: %d\n", somarMatriz());
	printf("Diagonal Principal: ", mostrarDiagonal(mDP));
	printf("Diagonal Principal: ", mostrarDiagonal(mDS));
	system("pause");
	return 0;	
}

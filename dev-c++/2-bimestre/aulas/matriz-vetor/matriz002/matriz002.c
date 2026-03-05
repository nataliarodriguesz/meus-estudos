#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int m[5][5];
int mDP[5];
int mDS[5];

void preencherMatriz(){
	int x,y;

	for(x=0; x<=4; x++){
	   for(y=0; y<=4; y++){
	   	   m[x][y] = rand()%100;
	   }	
	}	
}

void mostrarMatriz(){
	int x,y;
	
	for(x=0; x<=4; x++){
	   for(y=0; y<=4; y++){
	   	  if(y != 4){
	   	  	printf("%3d   ", m[x][y]);
		  }else{
		  	printf("%d\n", m[x][y]);
		  }
	   }	
	}
	printf("\n");
}

int somarMatriz(){
	int x, y, soma=0;
	
	for(x=0; x<=4; x++){
	   for(y=0; y<=4; y++){
	   	   soma += m[x][y];
	   }	
	}
	return soma;
}

void montarDP(){
	int x;
	
	for(x=0; x<=4; x++){
		mDP[x] = m[x][x];
	}
}

void montarDS(){
	int x;
	
	for(x=0; x<=4; x++){
		mDS[x] = m[x][4-x];
	}
}

void mostrarDiagonal(int vetor[]){
	int x;
	for(x=0; x<=4; x++){
		printf("%2d    ", vetor[x]);
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	preencherMatriz();
	mostrarMatriz();
	montarDP();
	montarDS();
	printf(" Soma: %d\n", somarMatriz());
	printf(" Diagonal Principal: ");
	mostrarDiagonal(mDP);
	printf("\n Diagonal Secundária: ");
	mostrarDiagonal(mDS);
	printf("\n");	
	
	system("pause");
	return 0;
}

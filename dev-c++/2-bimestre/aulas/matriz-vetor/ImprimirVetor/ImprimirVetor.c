#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirVetor(int vetor[], int tamanho){
	int x;
	for(x=0; x < tamanho; x++){
		printf("%4d", vetor[x]);	
	}
	printf("\n");
}

int main(){
	int vetor[5] = {1, 2, 3, 4, 5};
	imprimirVetor(vetor, 5);
	
	system("pause");
	return 0;
}

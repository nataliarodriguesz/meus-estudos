#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int v[6];

void sortearValores(){
	int x;
	
	for(x=0; x<=5; x++){
		v[x] = rand()%60+1;
	}
}
	
void mostrarVetor(){
	int x;
	
	for(x=0;x<=5;x++){
		printf("v[%d] = %d\n", x, v[x]);
	}
}

int main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	sortearValores();
	mostrarVetor();
}


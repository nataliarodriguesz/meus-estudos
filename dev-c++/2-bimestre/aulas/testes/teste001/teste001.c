#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	int matriz[3][3];
	int i, j;
	
	for(i=0; i<=2; i++){
		for(j=0; j<=2; j++){
			printf("Digite o valor [%d,%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}	
	}
	
	printf("\n    [1] [2] [3]\n");
	for(i=0; i<=2; i++){
		printf("[%d]  ", i+1);
		for(j=0; j<=2; j++){
			if(j < 2){
				printf("%d   ", matriz[i][j]);
			} else{
				printf("%d\n", matriz[i][j]);	
			}	
		}	
	}
	
	system("pause");
	return 0;	
}

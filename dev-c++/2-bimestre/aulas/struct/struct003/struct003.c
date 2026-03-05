#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
	int ra;
	char nome[50];
	float nota;
} Aluno;


void lerTurma(int t, Aluno turma[]){
	int x;
	for(x=0; x<=t-1; x++){
		printf("--- %dº ALUNO ---\n", x+1);
		printf(" RA: ");
		scanf("%d", &turma[x].ra);
		printf(" Nome: ");
		scanf("%s", &turma[x].nome);
		printf(" Nota: ");
		scanf("%f", &turma[x].nota);
		printf("\n");
	}
}

void imprimirTurma(int t, Aluno turma[]){
	int x;
	printf("--- TURMA ---\n\n");
	for(x=0; x<=t-1; x++){
		printf("RA:   %d\n", turma[x].ra);
		printf("Nome: %s\n", turma[x].nome);
		printf("Nota: %.2f\n\n", turma[x].nota);
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	Aluno turma[5];
	lerTurma(5, turma);
	system("cls");
	imprimirTurma(5, turma);

	system("pause");
	return 0;
}

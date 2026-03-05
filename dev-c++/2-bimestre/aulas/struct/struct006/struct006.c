#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
	int ra;
	char nome[25];
	float nota1;
	float nota2;
	float m;
}Aluno;

Aluno turma[5];

void cadastrarAlunos(){
	int i;
	printf("---- CADASTRAR ALUNOS ---\n");
	for(i=0; i <= 4; i++){
		printf("\n - %dº Aluno - \n", i+1);
		printf(" RA:      ");
		scanf("%d", &turma[i].ra);
		while(getchar() != '\n');
		printf(" Nome:    ");
		fgets(turma[i].nome, 25, stdin);
		turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';
		printf("Novo nome: %s", turma[i].nome);
		printf(" 1ª Nota: ");
		scanf("%f", &turma[i].nota1);
		printf(" 2ª Nota: ");
		scanf("%f", &turma[i].nota2);
		turma[i].m = (turma[i].nota1 + turma[i].nota2)/2;
	}	
}

int main(){
	setlocale(LC_ALL, "");
	cadastrarAlunos();	
}

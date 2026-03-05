#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
	int ra;
	char nome[50];
	float nota;
} Aluno;

void imprimirFormulario(Aluno x){
	printf("--- Impressão do Formulário ---\n\n");
	printf(" RA do aluno:   %d\n", x.ra);
	printf(" Nome do aluno: %s\n", x.nome);
	printf(" Nota do aluno: %.2f\n", x.nota);
}

int main(){
	setlocale(LC_ALL, "");
	Aluno a;
	a.ra = 123;
	a.nota = 8.5;
	strcpy(a.nome, "Ana Maria");
	imprimirFormulario(a);
	
	system("pause");
	return 0;
}

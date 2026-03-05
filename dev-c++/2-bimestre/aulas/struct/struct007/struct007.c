#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
	int ra;
	char nome[25];
	float nota1;
	float nota2;
}Aluno;

Aluno a;

void lerAlunos(){
	FILE *arquivo;
	arquivo = fopen("turma.dat", "rb");
	
	while(fread(&a, sizeof(Aluno), 1, arquivo) == 1){
		printf("RA:      %d\n", a.ra);
		printf("Nome:    %s\n", a.nome);
		printf("1ª Nota: %.2f\n", a.nota1);
		printf("2ª Nota: %.2f\n\n", a.nota2);
	}
}
	
int main(){
	setlocale(LC_ALL,"portuguese");
	lerAlunos();
	
	system("pause");
	return 0;
}

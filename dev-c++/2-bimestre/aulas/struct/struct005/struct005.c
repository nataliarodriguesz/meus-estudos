#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{    // definir um novo tipo
	int ra;        // ocupa 4  bytes
	char nome[25]; // ocupa 25 bytes
	float nota;    // ocupa 8  bytes
}Aluno;

Aluno a;

void menuPrincipal(){
	int op;
	do{
		system("cls");
		printf("--- MENU PRINCIPAL ---\n");
		printf("1 - Cadastrar Aluno\n");
		printf("2 - Ler Cadastro\n");
		printf("3 - Sair\n");
		printf("----------------------\n");
		printf("Escolha: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				cadastrarAluno();
				gravarAluno();
				break;
			case 2:
				lerAluno();
				break;
			case 3:
				printf("Saindo ...\n");
				break;
		    default:
		    	printf("Opção inválida!\n");
		}
	}while(op != 3);
}

void cadastrarAluno(){
	system("cls");
	printf("--- Cadastro de Aluno ---\n");
	printf("RA:   ");
	scanf("%d", &a.ra);
	
	printf("Nome: ");
	scanf("%s", &a.nome);
	
	printf("Nota: ");
	scanf("%f", &a.nota);
}

void gravarAluno(){
	FILE *arquivo;
	
	arquivo = fopen("aluno.dat", "wb"); // wb gravaçãoo binária
	// 1º parâmetro -> o que vai ser gravado
	// 2º parâmetro -> o tamanho em bytes 
	// 3º parâmetro -> quantidade que vai ser gravado
	// 4º parâmetro -> 	qual é o nome do arquivo e a forma de gravação
	fwrite(&a, sizeof(Aluno), 1, arquivo);
	fclose(arquivo);
}

void lerAluno(){
	FILE *arquivo;
	
	arquivo = fopen("aluno.dat", "rb");	// rb leitura bin�ria
	fread(&a, sizeof(Aluno), 1, arquivo);
	printf("--- Dados do Aluno ---\n");
	printf("RA:   %d\n", a.ra);
	printf("Nome: %s\n", a.nome);
	printf("Nota: %f\n", a.nota);
	fclose(arquivo);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	menuPrincipal();
	
	system("pause");
	return 0;		
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
	int ra;
	char nome[25];
	float nota_p1;
	float nota_p2;
} Aluno;

Aluno turma[5];


void cadastrarAlunos(){
	printf("Cadastro de Alunos\n");
	int i;
	for(i=0; i<=4; i++){
		printf("\nDados do Aluno %d\n",i+1);
		printf("RA: ");
		scanf("%d", &turma[i].ra);  //123 "  "/n
        while(getchar() != '\n');
        
		printf("Nome: ");
		fgets(turma[i].nome, 25, stdin);  // \n
		turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';
		
		printf("Nota1: ");
		scanf("%f", &turma[i].nota_p1);
		
		printf("Nota2: ");
		scanf("%f", &turma[i].nota_p2);
	}
	
	FILE *arquivo;
	arquivo = fopen("turma.dat", "wb"); // gravação binária
    fwrite(&turma, sizeof(Aluno), 5, arquivo);
    fclose(arquivo);
}

void imprimirRelatorio(){
    Aluno aluno_temp; // Struct temporária para ler cada aluno
    FILE *arquivo;
    
    // 1. Abrir o arquivo para leitura binária ("rb")
    arquivo = fopen("turma.dat", "rb");

    if (arquivo == NULL) {
        printf("Erro! Nao foi possivel abrir o arquivo 'turma_completa.dat'\n");
        printf("Voce executou o programa GERADOR.C primeiro?\n");
    }

    // 2. Cabeçalho do Relatório
    printf("+-------+----------------------+-------+-------+-------+----------+\n");
    printf("| RA    | NOME                 | P1    | P2    | MEDIA | STATUS   |\n");
    printf("+-------+----------------------+-------+-------+-------+----------+\n");


    //    Enquanto for possível ler 1 struct do arquivo...
    while (fread(&aluno_temp, sizeof(Aluno), 1, arquivo) == 1) {
        
        // 4. Cálculos e lógica para o relatório
        float media = (aluno_temp.nota_p1 + aluno_temp.nota_p2) / 2.0;
        char status[20]; // String para "Aprovado" ou "Reprovado"

        if (media >= 7.0) {
            strcpy(status, "Aprovado");
        } else {
            strcpy(status, "Reprovado");
        }

        // 5. Exibindo a linha do relatório formatada
        //    ( %-20s significa "string alinhada à esquerda com 20 espaços")
        printf("| %-5d | %-20s | %4.1f  | %4.1f  | %5.1f | %-9s|\n",
               aluno_temp.ra,
               aluno_temp.nome,
               aluno_temp.nota_p1,
               aluno_temp.nota_p2,
               media,
               status);
    }
        printf("+-------+----------------------+-------+-------+-------+----------+\n");

}

void imprimirStatus(char p_status[20]){
	printf("Relatório de alunos %s\n", p_status);
	Aluno aluno_temp; // Struct temporária para ler cada aluno
    FILE *arquivo;
    
    // 1. Abrir o arquivo para leitura binária ("rb")
    arquivo = fopen("turma.dat", "rb");

    if (arquivo == NULL) {
        printf("Erro! Nao foi possivel abrir o arquivo 'turma_completa.dat'\n");
        printf("Voce executou o programa GERADOR.C primeiro?\n");
    }

    // 2. Cabeçalho do Relatório
    printf("+-------+----------------------+-------+-------+-------+----------+\n");
    printf("| RA    | NOME                 | P1    | P2    | MEDIA | STATUS   |\n");
    printf("+-------+----------------------+-------+-------+-------+----------+\n");


    //    Enquanto for possível ler 1 struct do arquivo...
    while (fread(&aluno_temp, sizeof(Aluno), 1, arquivo) == 1) {
        
        // 4. Cálculos e lógica para o relatório
        float media = (aluno_temp.nota_p1 + aluno_temp.nota_p2) / 2.0;
        char status[20]; // String para "Aprovado" ou "Reprovado"

        if (media >= 7.0) {
            strcpy(status, "Aprovado");
        } else {
            strcpy(status, "Reprovado");
        }
        
        if(strcmp(p_status, status) == 0){
	        // 5. Exibindo a linha do relatório formatada
	        //    ( %-20s significa "string alinhada à esquerda com 20 espaços")
	        printf("| %-5d | %-20s | %4.1f  | %4.1f  | %5.1f | %-9s|\n",
	               aluno_temp.ra,
	               aluno_temp.nome,
	               aluno_temp.nota_p1,
	               aluno_temp.nota_p2,
	               media,
	               status);
    	}
    }
        printf("+-------+----------------------+-------+-------+-------+----------+\n");	
}

void imprimirMelhores (int bim){
	printf("Melhores alunos %dº Bimestre\n", bim);
	
	Aluno aluno_temp; // Struct temporária para ler cada aluno
    FILE *arquivo;
    
    // 1. Abrir o arquivo para leitura binária ("rb")
    arquivo = fopen("turma.dat", "rb");

    if (arquivo == NULL) {
        printf("Erro! Nao foi possivel abrir o arquivo 'turma_completa.dat'\n");
        printf("Voce executou o programa GERADOR.C primeiro?\n");
    }

    // 2. Cabeçalho do Relatório
    printf("+-------+----------------------+-------+\n");
    printf("| RA    | NOME                 | P%d    |\n", bim);
    printf("+-------+----------------------+-------+\n");


    //    Enquanto for possível ler 1 struct do arquivo...
    while (fread(&aluno_temp, sizeof(Aluno), 1, arquivo) == 1) {
        
        // 4. Cálculos e lógica para o relatório
        float media = (aluno_temp.nota_p1 + aluno_temp.nota_p2) / 2.0;
        char status[20]; // String para "Aprovado" ou "Reprovado"

        if (media >= 7.0) {
            strcpy(status, "Aprovado");
        } else {
            strcpy(status, "Reprovado");
        }
		
		if(bim == 1 && aluno_temp.nota_p1 >= 8){
	        // 5. Exibindo a linha do relatório formatada
	        //    ( %-20s significa "string alinhada à esquerda com 20 espaços")
	        printf("| %-5d | %-20s | %4.1f  |\n",
	               aluno_temp.ra,
	               aluno_temp.nome,
	               aluno_temp.nota_p1);
    	} else if(bim == 2 && aluno_temp.nota_p2 >= 8){
    		printf("| %-5d | %-20s | %4.1f  |\n",
	        aluno_temp.ra,
	        aluno_temp.nome,
	        aluno_temp.nota_p2);
		}
    }
        printf("+-------+----------------------+-------+\n");	
}


int main(){
	setlocale(LC_ALL, "portuguese");
	int opcao;
	
	do{
		printf("=======  Menu Principal =======\n");
		printf("Escolha uma das opções abaixo:\n");
		printf("1. Cadastrar Alunos\n");
		printf("2. Imprimir Relatório Geral\n");
		printf("3. Imprimir Relatório de Aprovados\n");
		printf("4. Imprimir Relatório de Reprovados\n");	
		printf("5. Imprimir Melhores Alunos Bimestre 1 (Nota1 >= 8)\n");	
		printf("6. Imprimir Melhores Alunos Bimestre 2 (Nota1 >= 8)\n");	
		printf("0. Sair do Programa!!!!\n");
		
		printf("\nDigite uma das opções: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 0:
				break;
			case 1:
				cadastrarAlunos();
				break;
			case 2:
				imprimirRelatorio();
				break;
			case 3:
				imprimirStatus("Aprovado");
				break;
			case 4:
				imprimirStatus("Reprovado");
				break;
			case 5:
				imprimirMelhores(1);
				break;
			case 6:
				imprimirMelhores(2);
				break;
			default:
				printf("Opção Inválida!!! \n");
		}
		system("pause");
		system("cls");
	}while(opcao !=0);	
}

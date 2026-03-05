#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

Produto estoque[5];

typedef struct{
	int codigo, quantidade;
	char nome[15];
	float preco;
} Produto;

void menu(){
	do{
		sysem("cls");
		printf("----  MENU ----\n");
		printf("1 - Buscar produto\n");
	    printf("2 - Listar produtos\n");
		printf("3 - Ler produtos\n");
		printf("4 - Sair");	
		scanf("%d", &op);
		
		switch(op){
			case 1:
				buscarProduto();
				parada();
				break;
			case 2:
				ListarProduto();
				parada();
				break;
			case 3:
				lerProdutos(estoque, 5);
				parada();
				break;
		}
	}while(op != 4);
}

void parada(){
	char stop[10];
	printf("\n\nPressione enter para voltar para o menu: ");
	scanf("%s", stop);
}

void lerProdutos(Produto estoque[], int t){
	int x;
	system("cls");
	printf("--- CADASTRO DE PRODUTOS ---\n\n");
	for(x=0; x<= t-1; x++){
	   printf("     - %dº PRODUTO -\n", x+1);
	   printf("    Código: ");
	   scanf("%d", &estoque[x].codigo);
	   while(getchar() != '\n');
	   printf("    Nome:   ");
	   fgets(estoque[x].nome, 15, stdin);
	   printf("    Preço:  R$");
	   scanf("%f", &estoque[x].preco);
	   printf("    Quant:  ");
	   scanf("%d", &estoque[x].quantidade);
	   printf("\n");	
	}	
}

void listarProdutos(Produto estoque[], int t){
	system("cls");
	for(x=0; x<=t-1; x++){
		printf("Código: %d\n", estoque[x].codigo);
		printf("Nome:   %s\n", estoque[x].nome);
		printf("Preço:  R$%f\n")
	}
}

int buscarProduto(int codigo, int quant, Produto estoque[], int t){
	for(x=0; x<=t-1; x++){
		if(codigo == estoque[x].codigo){
			if(quant <= estoque[x].quantidade){
			    mostrarInfo(estoque[x]);
			    estoque[x].quantidade = estoque[x].quantidade - quant;
			    break;		
			}
		}	
	}	
	printf("\nProduto não encontrado\n");
}

void mostrarInfo(Produto produto){
	printf(" Produtos encontrados: \n\n");
	printf(" Código: %d\n", produto.codigo);
	printf(" Nome:   %s\n", produto.nome);
	printf(" Preço:  R$%.2f\n", produto.preco);
	printf(" Quant:  %d\n", produto.quantidade);
}



int main(){
	setlocale(LC_ALL, "portuguese");

	
	system("pause");
	return 0;	
}

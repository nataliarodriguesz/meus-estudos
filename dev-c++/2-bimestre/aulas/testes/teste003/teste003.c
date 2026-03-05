#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void soma_procedure(){
	int a = 5;
	int b = 10;
	int resultado = a + b;
	printf("O resultado (dentro da procedure) é: %d\n", resultado);
}

int soma_funcao(){
	int a = 5;
	int b = 10;
	int resultado = a + b;
	return resultado;
}

int main(){
	setlocale(LC_ALL, "");
	printf("\n--- Chamando a procedure ---\n");
	soma_procedure();
	
	printf("\n---  Chamando a função   ---\n");
	int resultado_recebido = soma_funcao();
	printf("O resultado (recebido pelo main) é: %d\n", resultado_recebido);
	
	system("pause");
	return 0;
}

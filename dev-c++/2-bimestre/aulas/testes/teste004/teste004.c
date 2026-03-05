#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int subtrair(int a, int b){
	int resultado;
	
	resultado = a-b;
	return resultado;
}

int somar(int a, int b){
	int resultado;
	
	resultado = a+b;
	return resultado;
}

int multiplicar(int a, int b){
	int resultado;
	
	resultado = a*b;
	return resultado;
}

int dividir(int a, int b){
	float resultado;
	
	resultado = a/b;
	return resultado;
}

int valor1(){
	int v1;
	printf("Digite o 1º valor: ");
	scanf("%d", &v1);
	return v1;
}

int valor2(){
	int v2;
	printf("Digite o 2º valor: ");
	scanf("%d", &v2);
	return v2;
}

int main(){
	setlocale(LC_ALL, "");
	int esc, v1, v2;
	
	printf("\n--- OPÇÕES ---\n");
	printf("(1)- Somar\n(2)- Subtrair\n(3)- Dividir\n(4)- Multiplicar");
	printf("\n-------------------\n");
	printf("Sua escolha: ");
	scanf("%d", &esc);
	system("cls");

	v1 = valor1();
	v2 = valor2();
		
	switch(esc){
		
		case 1:
			printf("-------- SOMA -------\n\n");
			printf("Resultado: %d\n", somar(v1, v2));
			break;
		case 2:
			printf("----- SUBTRAÇÃO -----\n\n");
			printf("Resultado: %d\n", subtrair(v1, v2));
			break;
		case 3:
			printf("------ DIVISÃO ------\n\n");
			printf("Resultado: %d\n", dividir(v1, v2));
			break;
		case 4:
			printf("---- MULTIPLICAÇÃO ----\n\n");
			printf("Resultado: %d\n", multiplicar(v1, v2));
	}
	
	system("pause");
	return 0;
}

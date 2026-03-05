#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	int matriz[5][7];
	int l, c;
	
	for(l=0; l<=4; l++){
		for(c=0; c<=6; c++){
			matriz[l][c] = rand();
		}
	}

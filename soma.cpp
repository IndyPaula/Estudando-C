#include <stdio.h>
#include <iostream>

int main(){
	int inteiro1, inteiro2, soma;
	printf("Entre com o primeiro numero: \n");
	scanf("%d", &inteiro1);
	
	printf("Entre com o segundo numero: \n");
	scanf("%d", &inteiro2);
	
	soma = inteiro1 + inteiro2;
	printf("A soma e %d", soma);
	return 0;
}

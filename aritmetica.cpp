#include <stdio.h>
#include <iostream>

int main(){
	int inteiro1, inteiro2, soma, subtracao, multiplicacao, divisao, resto;
	
	printf("Entre com o primeiro numero: \n");
	scanf("%d", &inteiro1);
	
	printf("Entre com o segundo numero: \n");
	scanf("%d", &inteiro2);
	
	soma = inteiro1 + inteiro2;
	subtracao = inteiro1 - inteiro2;
	multiplicacao = inteiro1 * inteiro2;
	divisao = inteiro1 / inteiro2;
	resto = inteiro1 % inteiro2;
	
	printf("A soma e %d\n", soma);
	printf("A subtracao e %d\n", subtracao);
	printf("A multiplicacao e %d\n", multiplicacao);
	printf("A divisao e %d\n", divisao);
	printf("A resto e %d\n", resto);
	return 0;
}


#include <stdio.h>
#include <iostream>

int main(){
	int grau;
	
	printf("Entre com um numero: \n");
	scanf("%d", &grau);
	
//	
//	if(grau >= 60){
//		printf("Aprovado");
//	}
//	else{
//		printf("Reprovado \n");
//	}

//	printf("%s\n", grau >= 60 ? "Aprovado" : "Reprovado");


	/*"Se grau for maior ou igual a 60 então execute printf (" Aprovado\n"),
	caso contrário execute printf ("Reprovado\n").*/
//	grau >= 60 ? printf("Aprovado\n") : printf("Reprovado");
	
	
	/*Estruturas if/else aninhadas verificam vários casos inserindo umas estruturas if/else
em outras.*/
	if (grau >= 90)
		printf("A\n");
	else if (grau >= 80)
		printf("B\n");
	else if (grau >= 70)
		printf("C\n");
	else if (grau >= 60)
		printf("D\n");
	else
		printf("F\n");
		printf("Voce deve fazer este curso novamente.\n");
	
	
	return 0;
}

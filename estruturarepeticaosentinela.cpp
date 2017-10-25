#include<stdio.h>
/*3.9 Formulando Algoritmos com Refinamento Top-Down por
Etapas: Estudo de Caso 2 (Repeti��o Controlada por Sentinela)*/

/*Programa em C e exemplo de execu��o do problema de m�dia da turma com
repeti��o controlada por sentinela.*/

int main(){
	
	float media;
	int contador, nota, total;
	/*Fase de inicia��o */
	total = 0;
	contador = 0;
	/*Fase de processamento*/
	printf("Entre com o nota, -1 para finalizar: ");
	scanf("%d", &nota);
	
	while(nota != -1){
		total = total + nota;
		contador = contador + 1;
		printf("Entre com o nota, -1 para finalizar: ");
		scanf("%d", &nota);
	}
	/*Fase de termina��o*/
	if(contador != 0){
		media = (float) total / contador;
		printf("A media da turma e  %.2f", media);
	}
	else{
		printf("Nenhum nota foi fornecido\n");
	}
	
	return 0;
}


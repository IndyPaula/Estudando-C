/*3.10 Formulando Algoritmos com Refinamento Top-Down por
Etapas: Estudo de Caso 3 (Estruturas de Controle Aninhadas)*/
#include <stdio.h>
int main(){
	
	int aprovacoes = 0;
	int reprovacoes = 0;
	int aluno = 1;
	int resultado;
	
	
	while(aluno <= 10){
		printf("Entre com o resultado (l=aprovado,2=reprovado): ");
		scanf("%d", resultado);
		if(resultado == 1){
			aprovacoes += 1;
		}
		else{
			reprovacoes += 1;
		}
		aluno += 1;
	}
	printf("Aprovados %d\n", aprovacoes);
	printf("Reprovados %d\n", reprovacoes);
	if(aprovacoes > 8){
		printf("Cobrar taxa escolar\n");
		return 0;
	}
}


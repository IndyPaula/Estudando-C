#include<stdio.h>

/*Uma estrutura de repetição permite ao programador especificar que uma ação deve
ser repetida enquanto uma determinada condição for verdadeira. A instrução em
pseudocódigo*/
int main(){
/* 3.8 Formulando Algoritmos: Estudo de Caso 1 (Repetição
Controlada por Contador)
Programa de media da turma com
2. repetição controlada por contador */


	int contador, nota, total, media;
	/* fase de inicialização */
	total = 0;
	contador = 1;
	/* fase de processamento */
	while (contador <= 10) {
		printf ("Entre com o nota: ");
		scanf ("%d", &nota);
		total = total + nota;
		contador = contador + 1;
	}
	/* fase de terminação */
	media = total / 10;
	printf ("A media da turma e %d/n", media);
	return 0; /* indica que o programa terminou corretamente */
}

#include<stdio.h>

/*Uma estrutura de repeti��o permite ao programador especificar que uma a��o deve
ser repetida enquanto uma determinada condi��o for verdadeira. A instru��o em
pseudoc�digo*/
int main(){
/* 3.8 Formulando Algoritmos: Estudo de Caso 1 (Repeti��o
Controlada por Contador)
Programa de media da turma com
2. repeti��o controlada por contador */


	int contador, nota, total, media;
	/* fase de inicializa��o */
	total = 0;
	contador = 1;
	/* fase de processamento */
	while (contador <= 10) {
		printf ("Entre com o nota: ");
		scanf ("%d", &nota);
		total = total + nota;
		contador = contador + 1;
	}
	/* fase de termina��o */
	media = total / 10;
	printf ("A media da turma e %d/n", media);
	return 0; /* indica que o programa terminou corretamente */
}

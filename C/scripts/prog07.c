#include <stdio.h>

int main() {

	int A, B, soma, subr, mult, divis;

	printf("Digite o primeiro valor: ");
	scanf("%d", &A);

	printf("Digite o segundo valor: ");
	scanf("%d", &B);

	soma = A + B;
	subr = A - B;
	mult = A * B;
	divis = A / B;

	printf("\n");
	printf("Resultados.\n");
	printf("Soma: %d.\n", soma);
	printf("Subtração: %d.\n", subr);
	printf("Multiplicação: %d.\n", mult);
	printf("Divisão: %d.\n", divis);
}

#include <stdio.h>

#define texto "Entrada e saida de dados"

int main() {
	printf("%s\n", texto);

	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";

	printf("Digite a idade: ");
	scanf("%d", &idade);

	printf("Digite sua altura: ");
	scanf("%f", &altura);

	printf("Digite o nome: ");
	scanf("%s", nome);

	printf("\n");

	printf("Dados informados.\n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("Nome: %s.\n", nome);
}

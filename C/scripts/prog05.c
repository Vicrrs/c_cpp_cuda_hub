#include <stdio.h>

int main(){
	
	int idade = 0;
	int ano = 0;
	float peso = 0.0;

	printf("Valor inicial da idade: %d.\n", idade);

	printf("Digite seu ano de nascimento e sua idade: \n");
	scanf("%d %d", &ano, &idade);

	printf("Digite seu peso atual: \n");
	scanf("%f", &peso);

	printf("Idade informada: %d.\n", idade);
	printf("Ano informado: %d.\n", ano);
	printf("Seu peso é  de %f.\n", peso);
}

#include <stdio.h>

int main() {
	char s[11];

	printf("Digite algo (Scand convencional): ");
	scanf("%s", s);
	fflush(stdin);

	printf("Resultado: %s\n\n", s);

	printf("Digite algo (Scand convencional): ");
	scanf("%10[^\n]s",s);
	fflush(stdin);

	printf("Resultado: %s\n\n", s);
}

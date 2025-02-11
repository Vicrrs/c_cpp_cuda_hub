#include <string.h>
#include <stdio.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = "/exist";
    char senha_usr[N];
    int ok;

    printf("Digite um texto: \n");
    fgets(senha_usr, N, stdin); // Correção: adicionados tamanho e fluxo de entrada

    // Remove a quebra de linha (\n) adicionada pelo fgets
    senha_usr[strcspn(senha_usr, "\n")] = '\0';

    ok = strcmp(hardText, senha_usr);

    if (ok == 0)
        printf("Textos iguais.\n");
    else
        printf("Textos diferentes.\n");

    return 0;
}

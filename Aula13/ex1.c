#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    int i, j, palindromo = 1;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("Resultado: é um palíndromo!\n");
    } else {
        printf("Resultado: NÃO é!\n");
    }

    return 0;
}

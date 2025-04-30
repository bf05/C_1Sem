#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6];
    char letra;
    int erros = 0;

    printf("Digite uma palavra de ate 5 letras: ");
    scanf("%s", palavra);

    while (erros < 3) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if (strchr(palavra, letra) != NULL) {
            printf("A letra %c foi encontrada na palavra.\n", letra);
        } else {
            printf("A letra %c nao foi encontrada na palavra.\n", letra);
            erros++;
        }
    }

    printf("Voce errou 3 vezes. Fim do jogo.\n");

    return 0;
}

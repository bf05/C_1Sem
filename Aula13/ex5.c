#include <stdio.h>
#include <string.h>

void desenhaTrianguloEsquerda(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void desenhaTrianguloDireita(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int num;
    char escolha;

        printf("Digite um numero: ");
        scanf("%d", &num);
           for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++) {
            printf ("*") ; 
        }
        printf ("\n");
    }
    
     while (1) {
        printf("Escolha (A-esquerda, D-direita, F-fim): ");
        scanf(" %c", &escolha); 

        if (escolha == 'A') {
            desenhaTrianguloEsquerda(num);
        } else if (escolha == 'D') {
            desenhaTrianguloDireita(num);
        } else if (escolha == 'F') {
            break;
        } else {
            printf("Opcao invalida.\n");
        }
    }
    return 0;
}
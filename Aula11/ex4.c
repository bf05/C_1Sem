#include <stdio.h>
#define tamanho 3

int main() {
    float numeros [tamanho] = {4.7, 8.2, 4.8};



    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: %.2f\n", i + 1, numeros[i]);
    }

    float total = 0.0;
    for (int i = 0; i < tamanho; i++) {
        total += numeros[i];
    }
    printf("total = %.2f\n", total);
    
    return 0;
}

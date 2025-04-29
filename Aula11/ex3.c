#include <stdio.h>
#define tamanho 4

int main() {
    float notas[tamanho] = {4.0, 5.0, 9.4, 6.7};

    for (int i = 0; i < tamanho; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    float total = 0.0;
    for (int i = 0; i < tamanho; i++) {
        total += notas[i];
    }
    printf("total = %.2f\n", total);
    
    return 0;
}


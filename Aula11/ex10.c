#include <stdio.h>

float media(float numeros[], int tamanho) {
    float total = 0.0;
    for (int i = 0; i < tamanho; i++) {
        total += numeros[i];
    }
    return total / tamanho;
}

float dobro(float numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] *= 2.0;
    }
    return media(numeros, tamanho);
}

void maior(float numeros[], int tamanho) {
    if (tamanho < 2) {
        return;
    }
    if (numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

void printVetor(float numeros[], int tamanho) {
    printf("Vetor: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f", numeros[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    float numeros[2];

    printf("Digite o primeiro numero: ");
    scanf("%f", &numeros[0]);

    printf("Digite o segundo numero : ");
    scanf("%f", &numeros[1]);

    printf("Vetor antes da media:\n");
    printVetor(numeros, 2);

    float media_result = media(numeros, 2);
    printf("Media: %.2f\n", media_result);

    printf("Vetor antes do dobro:\n");
    printVetor(numeros, 2);

    float dobro_result = dobro(numeros, 2);
    printf("Media apos o dobro: %.2f\n", dobro_result);

    printf("Vetor antes de maior():\n");
    printVetor(numeros, 2);

    maior(numeros, 2);

    
    printf("Vetor apos maior():\n");
    printVetor(numeros, 2);

    return 0;
}

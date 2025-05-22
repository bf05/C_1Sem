#include <stdio.h>
#include <math.h>


float calcular_tempo_queda(float altura) {
    float g = 9.81; 
    return sqrt((2 * altura) / g);
}

float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo_queda = calcular_tempo_queda(altura);
    return velocidade * tempo_queda;
}

int main() {
    float altura, velocidade;

    printf("Digite a altura do avião (em metros): ");
    scanf("%f", &altura);
    printf("Digite a velocidade do avião (em m/s): ");
    scanf("%f", &velocidade);

    float distancia_liberacao = calcular_distancia_liberacao(velocidade, altura);
    float tempo_queda = calcular_tempo_queda(altura);

    printf("A caixa deve ser liberada a %.2f metros antes do alvo.\n", distancia_liberacao);
    printf("O tempo de queda da caixa será de %.2f segundos.\n", tempo_queda);

    return 0;
}

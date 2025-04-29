#include <stdio.h>
#define PI 3.14159

int main(){
    float raio;
    float area;
    
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    
    printf("A=%.4f\n", area);
    return 0;
}
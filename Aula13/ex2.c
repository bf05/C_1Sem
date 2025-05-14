#include <stdio.h>
#include <string.h>

int main() {

int maior;

int vetor[5] = {9, 7, 3, 6, 8};
printf("O vetor é : %d %d %d %d %d\n" , vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

for(int i = 0; i < 4; i++) {
    for(int i = 0; i < 5; i++) 
    if( vetor[i] > vetor[i+1] ) {
        maior = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = maior;
    }
} 
printf("A ordem correta é : %d %d %d %d %d\n" , vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

return 0;

}
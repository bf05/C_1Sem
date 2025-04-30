#include <stdio.h>

int main() {
    char nome[6] = "Bruna";

    printf("\n Nome: %s\n\n",nome);

    for(int i = 0; i < 6; i++) {
        printf(" * %c" , nome [i]);
  
    }
    printf ("\n\n");
 return 0;
}
#include <stdio.h>

int main(void) {
  FILE *pArquivo = NULL;
  pArquivo = fopen("nomes.txt", "r");

  if (pArquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }
  
  char destino[80];

    while(fgets(destino, 80, pArquivo) != NULL){

        printf("%s", destino);

}
  fclose(pArquivo);
  return 0;
}
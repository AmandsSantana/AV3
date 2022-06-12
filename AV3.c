
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MinhaBiblioteca.h"

int main(void) {
  
  char *mensagem;
  char *mensagemSaida;
  char original[1];
  char novo[1];
  
  mensagem = malloc(256 * sizeof(int));

  printf("Digite uma palavra: ");
  scanf("%s", mensagem);
  printf("Informa a letra que deseja trocar: ");
  scanf(" %c", original);
  printf("Informe a letra que irá substituir: ");
  scanf(" %c", novo);
  
  int quantidadeTrocas = TrocaCaracter(&mensagem, original[0], novo[0], &mensagemSaida, strlen(mensagem));

  printf("Nova palavra é: ");
  printf("%s\n", mensagemSaida);
  printf("Palavra original: ");
  printf("%s\n", mensagem);
  printf("Quantidade de trocas: ");
  printf("%d\n", quantidadeTrocas);
  
  return 0;
}

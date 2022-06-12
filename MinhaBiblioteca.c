#include <stdio.h>
#include <stdlib.h>
#include "MinhaBiblioteca.h"

int TrocaCaracter(char **mensagemEntrada, char original, char novo, char **mensagemSaida, int tamanho)
{
  int quantidadeTrocas = 0;

  *mensagemSaida = malloc(tamanho * sizeof(int));
  
  for (int i = 0 ; i < tamanho ; i++){
    (*mensagemSaida)[i] = (*mensagemEntrada)[i];
    
    if((*mensagemEntrada)[i] == original){
      (*mensagemSaida)[i] = novo; 
      quantidadeTrocas = quantidadeTrocas + 1;
    }
  }
  
  return quantidadeTrocas;
}
#include <stdio.h>

int main(){
  int opcao;
  do {
  printf("\nMenu principal\n");
  printf("1 - Criar tarefa\n");
  printf("2 - Deletar tarefa\n");
  printf("3 - Listar tarefa\n");
  printf("0 - Sair\n");
  printf("Entre com uma opcao: ");
  scanf("%d", &opcao);
  printf("opcao escolhida: %d\n", opcao);
  }while (opcao != 0);
  

  
}
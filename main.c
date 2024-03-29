#include "tarefas.h"
#include <stdio.h>

int main() {
  int pos = 0;
  Tarefa tarefas[TOTAL];

  erro e = carregar(tarefas,TOTAL,&pos);
  if(e== ABRIR){
    printf("erro ao abrir o arquivo\n");
    pos = 0;
  }
  else if(e== FECHAR){
    printf("erro ao fechar o arquivo\n");
  }
  else if(e== LER){
    printf("erro ao ler o arquivo\n");
  }
  int opcao;
  do {
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefas\n");
    printf("0 - Sair\n");
    printf("Entre com uma opcao: ");
    int i = scanf("%d", &opcao);

    printf("Opcao escolhida: %d\n", opcao);
    if (opcao == 1) {
      e = criar(tarefas, &pos);
      if(e == MAX_TAREFAS)
        printf("maximos de tarefas alcançada\n");
    } else if (opcao == 2) {
     e = deletar(tarefas, &pos);
      if(e == SEM_TAREFAS)
        printf("nao ha tarefas para deletar\n");
      else if(e == NAO_EXISTE)
        printf("tarefa nao existe\n");
    } else if (opcao == 3) {
      e = listar(tarefas, pos);
      if(e == SEM_TAREFAS)
        printf("nao ha tarefas para listar\n");
    } else if (opcao == 0) {
      printf("Sair\n");
       e = salvar(tarefas, TOTAL, pos);
      if(e==ABRIR)
        printf("erro ao abrir arquivo\n");
      else if(e==FECHAR)
        printf( "erro ao fechar arquivo\n");
      else if(e==ESCREVER)
        printf("erro ao escrever arquivo\n");
    } else {
      printf("opcao invalida");
    }

  } while (opcao != 0);
}
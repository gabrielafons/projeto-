#include "tarefas.h"
#include <stdio.h>

int criar(Tarefa tarefas[], int *pos){
  if(*pos >= TOTAL)
  return 1;
  printf("Entre com a prioridade: ");
  scanf("%d", &tarefas[*pos].prioridade);

  printf("Entre com a categoria: ");
  fgets(tarefas[*pos].categoria, 100, stdin);

  printf("Entre com a descrição: ");
  fgets(tarefas[*pos].descricao, 300, stdin);
  
  
}
int deletar(Tarefa tarefas[], int *pos){
if(*pos == 0)
  return 1;{

int pos_d;
printf("Entre com a posição da tarefa: ");
scanf("%d", &pos_d);
if(pos_d >= *pos)
  return 2;

for(int i = pos_d; i < *pos - 1; i++){
  tarefas[i].prioridade = tarefas[i+1].prioridade;
  strcpy(tarefas[i].categoria, tarefas[i+1].categoria);
  strcpy(tarefas[i].descricao, tarefas[i+1].descricao);
}
  
  }
return 0;
}
int listar(Tarefa tarefas[], int *pos){
  if (pos == 0)  
return 1;

for (int i = 0; i < *pos; i++){
  printf("Pos: %d\t", i + 1);
  printf("Prioridade: %d\n", tarefas[i].prioridade);
  printf("Categoria: %s\n", tarefas[i].categoria);
  printf("Descrição: %s\n", tarefas[i].descricao);
  
}
  return 0;
  
}
int salva(Tarefa tarefas[], int total, int *pos){
printf("funcao de salvar tarefas\n");
return 0;
}
int carregar(Tarefa tarefas[], int total, int *pos){
printf("funcao de carregar tarefas\n");
return 0;
}



void clearBuffer(){
  int c;
  while((c = getchar()) != '\n' && c != EOF);{
    
  }
}

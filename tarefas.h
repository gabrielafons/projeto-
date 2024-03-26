#define TOTAL 100

typedef struct Tarefa {
  int prioridade;
  char descricao[300];
  char categoria[100];
} Tarefa;

typedef enum erros {OK,MAX_TAREFAS, SEM_TAREFAS,NAO_EXISTE,ABRIR,FECHAR,ESCREVER, LER}erro;

erro criar(Tarefa tarefas[], int *pos);
erro deletar(Tarefa tarefas[], int *pos);
erro listar(Tarefa tarefas[], int pos);
erro salvar(Tarefa tarefas[], int total, int pos);
erro carregar(Tarefa tarefas[], int total, int *pos);
void clearBuffer();
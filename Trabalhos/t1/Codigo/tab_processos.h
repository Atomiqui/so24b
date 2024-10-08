// tab_processos.h

#ifndef TAB_PROCESSOS_H
#define TAB_PROCESSOS_H

#include "processo.h"

typedef struct tab_processos tab_processos;

// cria uma tabela de processos
tab_processos *tab_processos_cria(void);

// destroi uma tabela de processos
void tab_processos_destroi(tab_processos *self);

// insere um processo na tabela
// retorna o PID do processo inserido ou -1 se não conseguiu inserir
int tab_processos_insere(tab_processos *self, processo *proc);

// remove um processo da tabela
// retorna true se conseguiu remover, false se não
bool tab_processos_remove(tab_processos *self, int pid);

// retorna o processo com o PID dado
// ou NULL se não existe
processo *tab_processos_busca(tab_processos *self, int pid);

// retorna o processo em execução
processo *tab_processos_proc_em_exec(tab_processos *self);

// define o processo em execução
void tab_processos_define_proc_em_exec(tab_processos *self, processo *proc);

// retorna o PID do processo em execução
int tab_processos_pid_em_exec(tab_processos *self);

// salvar estado do processador relativo ao processo em execução
void tab_processos_salva_cpu(tab_processos *self);

// restaurar estado do processador relativo ao processo em execução
void tab_processos_restaura_cpu(tab_processos *self);

#endif // TAB_PROCESSOS_H
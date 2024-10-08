// tab_processos.c

#include "tab_processos.h"


#define MAX_PROCESSOS 10

//TODO: Como salvar o estado do processador relativo a cada processo?
struct tab_processos {
    processo *proc_em_exec;
    processo *processos[MAX_PROCESSOS];
    
};
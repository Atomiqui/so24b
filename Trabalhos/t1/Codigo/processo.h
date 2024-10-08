// processo.h

#ifndef PROCESSO_H
#define PROCESSO_H

typedef struct processo processo;

// cria um processo
processo *processo_cria(void);

// destroi um processo
void processo_destroi(processo *self);

#endif // PROCESSO_H
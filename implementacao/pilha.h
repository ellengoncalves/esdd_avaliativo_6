#include "paciente.h"

typedef struct NoPilha {
    Paciente paciente;
    struct NoPilha* prox;
} NoPilha;

typedef struct {
    NoPilha* topo;
} Pilha;

void inicializarPilha(Pilha* pilha);
void empilhar(Pilha* pilha, Paciente paciente);
int desempilhar(Pilha* pilha, Paciente* paciente);
int pilhaVazia(const Pilha* pilha);
void imprimirPilha(const Pilha* pilha);
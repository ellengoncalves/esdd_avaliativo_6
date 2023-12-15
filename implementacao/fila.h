#include <stdio.h>
#include <stdlib.h>

#include "paciente.h"

typedef struct No {
    Paciente paciente;
    struct No* prox;
} No;

// Definicao da estrutura da fila
typedef struct {
    No* cabeca;
    No* cauda;
} FilaPrioritaria;

void inicializarFila(FilaPrioritaria* fila);
int estaVazia(FilaPrioritaria* fila);
void enfileirar(FilaPrioritaria* fila, Paciente paciente);
int desenfileirar(FilaPrioritaria* fila, Paciente* paciente);
void imprimirFila(FilaPrioritaria* fila);
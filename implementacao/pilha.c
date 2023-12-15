#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializarPilha(Pilha* pilha) {
    pilha->topo = NULL;
}

void empilhar(Pilha* pilha, Paciente paciente) {
    NoPilha* novoNo = (NoPilha*)malloc(sizeof(NoPilha));
    if (novoNo == NULL) {
        exit(EXIT_FAILURE);
    }

    novoNo->paciente = paciente;
    novoNo->prox = pilha->topo;
    pilha->topo = novoNo;
}

int desempilhar(Pilha* pilha, Paciente* paciente) {
    if (pilhaVazia(pilha)) {
        return 0; // Pilha vazia
    }

    NoPilha* temp = pilha->topo;
    *paciente = temp->paciente;

    pilha->topo = temp->prox;
    free(temp);

    return 1; // Sucesso
}

int pilhaVazia(const Pilha* pilha) {
    return pilha->topo == NULL;
}

void imprimirPilha(const Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia.\n");
        return;
    }

    NoPilha* atual = pilha->topo;
    while (atual != NULL) {
         imprimirPaciente(&atual->paciente);
        atual = atual->prox;
    }
}
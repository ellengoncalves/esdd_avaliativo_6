#include "fila.h"

void inicializarFila(FilaPrioritaria* fila) {
    fila->cabeca = NULL;
    fila->cauda = NULL;
}

int estaVazia(FilaPrioritaria* fila) {
    return (fila->cabeca == NULL);
}

void enfileirar(FilaPrioritaria* fila, Paciente paciente) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->paciente = paciente;
    novoNo->prox = NULL;

    if (estaVazia(fila)) {
        fila->cabeca = novoNo;
        fila->cauda = novoNo;
    }
    else {
        No* atual = fila->cabeca;
        No* anterior = NULL;

        while (atual != NULL && atual->paciente.grupoPrioridade <= novoNo->paciente.grupoPrioridade) {
            anterior = atual;
            atual = atual->prox;
        }

        if (anterior == NULL) {
            novoNo->prox = fila->cabeca;
            fila->cabeca = novoNo;
        }
        else {
            anterior->prox = novoNo;
            novoNo->prox = atual;

            if (atual == NULL) {
                fila->cauda = novoNo;
            }
        }
    }
}

int desenfileirar(FilaPrioritaria* fila, Paciente* paciente) {
    if (estaVazia(fila)) {
        return 0; // Fila vazia
    }

    No* temp = fila->cabeca;
    *paciente = temp->paciente;

    fila->cabeca = temp->prox;
    free(temp);

    if (fila->cabeca == NULL) {
        fila->cauda = NULL;
    }

    return 1; // Sucesso
}

void imprimirFila(FilaPrioritaria* fila) {
    if (estaVazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }

    No* atual = fila->cabeca;
    while (atual != NULL) {
        imprimirPaciente(atual);
        atual = atual->prox;
    }
}

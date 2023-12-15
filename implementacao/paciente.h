#ifndef PACIENTE_H
#define PACIENTE_H

#include <stdio.h>
#include <string.h>

typedef struct {
    char numeroSUS[12];
    int idade;
    int grupoPrioridade;
} Paciente;

void inicializarPaciente(Paciente* paciente, char* sus, int idade, int prioridade);
void imprimirPaciente(const Paciente* paciente);

#endif
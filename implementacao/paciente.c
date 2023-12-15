#include "paciente.h"

void inicializarPaciente(Paciente* paciente, char* sus, int idade, int prioridade) {
    strncpy(paciente->numeroSUS, sus, sizeof(paciente->numeroSUS) - 1);
    paciente->numeroSUS[sizeof(paciente->numeroSUS) - 1] = '\0';
    paciente->idade = idade;
    paciente->grupoPrioridade = prioridade;
}

void imprimirPaciente(const Paciente* paciente) {
    printf("Numero SUS: %s - ", paciente->numeroSUS);
    printf("Idade: %d - ", paciente->idade);
    printf("Grupo de Prioridade: %d\n\n", paciente->grupoPrioridade);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "paciente.h"
#include "fila.h"
#include "pilha.h"

int main() {
	int opcaoMenu;
	FilaPrioritaria fila;
	Pilha pilha;

	inicializarFila(&fila);
	inicializarPilha(&pilha);

	printf("\nMENU\n1 - Adicionar paciente a lista de vacinacao\n2 - Vacinar paciente\n3 - Listar pacientes a vacinar\n4 - Listar pacientes vacinados\n5 - Retirar da lista de vacinados o ultimo paciente adicionado\n6 - sair\n");
	scanf("%d", &opcaoMenu);

	while (opcaoMenu != 6) {
		if (opcaoMenu == 1) {
			Paciente paciente;
			char numeroSus[11];
			int idade;
			int grupoPrioridade;

			printf("\nQual o Numero SUS do paciente?\n");
			scanf("%s", &numeroSus);

			printf("\nQual a idade do paciente\n");
			scanf("%d", &idade);

			printf("\nQual grupo de prioridade o paciente se encontra?\nTrabalhador de saude (1)\nIdoso *acima de 60 anos* (2)\nIndigena (3)\nRibeirinha e Quilombola (4)\nCom comorbiudades (5)\nTrabalhador com educacao (6)\nDeficiencia permanente severa (7)\nForca de seguranca e salvamento (8)\nFuncionario do sistema penitenciario (9)\nCom liberdade privada (10)\n");
			scanf("%d", &grupoPrioridade);

			inicializarPaciente(&paciente, numeroSus, idade, grupoPrioridade);
			enfileirar(&fila, paciente);

			printf("\nO paciente foi adicionado em uma posicao da fila de acordo com sua prioridade\n");
		}else if(opcaoMenu == 2){
			Paciente paciente;

			if(desenfileirar(&fila, &paciente) == 1){
				empilhar(&pilha, paciente);
				printf("\nO paciente foi adicionado a lista de vacinados\n");
			}else{
				printf("\nNao ha nenhum paciente a vacinar\n");
			}
		}
		else if(opcaoMenu == 3){
			if (!estaVazia(&fila)) {
				printf("\nLista de pacientes para vacinar:\n\n");
				imprimirFila(&fila);
			}else{
				printf("\nNao ha nenhum paciente a vacinar\n");
			}
		}else if(opcaoMenu == 4){
			if(pilhaVazia(&pilha) == 1){
				printf("\nNao ha nenhum paciente vacinado\n");
			}else{
				printf("\nLista de pacientes vacinados:\n\n");
				imprimirPilha(&pilha);
			}
			
		}else if(opcaoMenu == 5){
			Paciente paciente;

			if(desempilhar(&pilha, &paciente) == 1){
				printf("\nRemovido da lista de vacinados: ");
				imprimirPaciente(&paciente);
			}else{
				printf("\nNao ha nenhum paciente vacinado\n");
			}
		}

		printf("\nMENU\n1 - Adicionar paciente a lista de vacinacao\n2 - Vacinar paciente\n3 - Listar pacientes a vacinar\n4 - Listar pacientes vacinados\n5 - Retirar da lista de vacinados o ultimo paciente adicionado\n6 - sair\n");
		scanf("%d", &opcaoMenu);
	}

	return 0;
}
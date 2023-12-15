# Exercício Avaliativo 6
Este repositório abriga a implementação do Exercício Avaliativo 6 da disciplina de Estrutura de Dados, sob instrução do professor Ednilson Rossi, no curso de Tecnologia em Sistemas para Internet do Instituto Federal de São Paulo.

## SOBRE
O exercício consiste em um sistema que simula o atendimento de vacinação do SUS. Implementado em linguagem C.

## DESCRIÇÃO DO PROJETO
O projeto como um todo foi construído usando o conceito de Tipo Abstrato de Dados (TAD). Dentro desse conceito utilizamos estruturas como Pilha, Fila, Lista Encadeada. Além disso, criamos outro pacote para representar coisas específicas do sistema, o TAD Paciente.

## AUTORAS DO PROJETO
*  [Ariane Sanga](https://github.com/ArianeSanga) | arianesanga4@icloud.com
*  [Ellen Pinheiro](https://github.com/ellengoncalves) | ellenpingon@gmail.com

## SCREENSHOTS DO SISTEMA

![image](https://github.com/ellengoncalves/esdd_avaliativo_6/assets/141193456/fc1f3f37-91fc-4505-8618-4baf569c6cf9)

![image](https://github.com/ellengoncalves/esdd_avaliativo_6/assets/141193456/3f311171-7f82-4204-85ad-225351095196)

![image](https://github.com/ellengoncalves/esdd_avaliativo_6/assets/141193456/c2e2621f-a120-47af-aed4-cf0ca53e2ac8)

![image](https://github.com/ellengoncalves/esdd_avaliativo_6/assets/141193456/1f131e43-b95f-4f94-85dc-f6c498e79c71)

## METODOLOGIA DE DESENVOLVIMENTO
* Ariane: encarregada  do TAD Fila, TAD Pilha e Main.
* Ellen: responsável pelos arquivos.h e TAD Paciente.
  
É importante ressaltar que, embora as tarefas tenham sido divididas, houve comunicação em todo o desenvolvimento. Todas as decisões relacionadas ao sistema foram discutidas de forma colaborativa, e mesmo com a atribuição de responsabilidades específicas, todos os membros contribuíram de maneira conjunta para o projeto. Além de que, cada membro teve a oportunidade de influenciar e propor alterações nas partes atribuídas aos outros.

## DESCRIÇÃO DOS TAD's
#### TAD Fila
Representa uma fila prioritária, onde os elementos (Pacientes) são enfileirados de acordo com seu grupo de proridade. A implementação utiliza um nó ('No') que contém um paciente e um ponteiro para o próximo nó na fila. A fila é do tipo cabeça e cauda, indicando o início e fim da fila.

#### TAD Pilha
Simboliza uma pilha de pacientes, onde eles são empilhados e desempilhados. Assim como no TAD Fila, a implementação utiliza um nó ('NoPilha') que contém um paciente e um ponteiro para o próximo nó na pilha.

#### TAD Paciente
Armazena as informações sobre um paciente. Cada paciente é identificado por um número SUS, possui uma idade e é assosciado a um grupo de prioridade.

## ORIENTAÇÕES DE COMPILAÇÃO
#### 1. Baixar/Clonar
Primeiramente, é necessário que você baixe ou clone o repositório para rodar :)
#### 2. Compilar

* Windows
  ```bash
  gcc *.c -o nome.exe
  ```
  
* Linux
  ```bash
  gcc *.c -o nome
  ```
  
#### 3. Executar

* Windows
  ```bash
  ./nome.exe
  ```
  
* Linux
  ```bash
  ./nome
  ```

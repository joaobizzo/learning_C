// ALUNO: João Bizzo Brandt
// RA: 2xxxxx28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Paciente {
    char nome[100];
    int estado; // 1 - Regular/ 2 - Ruim/ 3 - Péssimo
    struct Paciente *prox;
} Paciente;

Paciente *inicio = NULL;

// funcao para inserir um paciente na fila de prioridades
void inserirPaciente(char nome[], int estado) {
    Paciente *novoPaciente = (Paciente *)malloc(sizeof(Paciente));
    if (novoPaciente == NULL) {
        printf("Erro ao alocar memória para o paciente.\n");
        return;
    }
    
    strcpy(novoPaciente->nome, nome);
    novoPaciente->estado = estado;
    novoPaciente->prox = NULL;

    if (inicio == NULL || estado > inicio->estado) {
        novoPaciente->prox = inicio;
        inicio = novoPaciente;
    } else {
        Paciente *temp = inicio;
        while (temp->prox != NULL && temp->prox->estado >= estado) {
            temp = temp->prox;
        }
        novoPaciente->prox = temp->prox;
        temp->prox = novoPaciente;
    }
}

// funcao para chamar o próximo paciente
void chamarProximoPaciente() {
    if (inicio == NULL) {
        printf("Não há pacientes na fila.\n");
        return;
    }

    Paciente *proximo = inicio;
    inicio = inicio->prox;
    printf("Chamando paciente: %s (Estado: %s)\n", proximo->nome, proximo->estado == 1 ? "Regular" : proximo->estado == 2 ? "Ruim" : "Péssimo");
    free(proximo);
}

// funcao principal
int main() {
    int opcao;
    char nome[100];
    int estado;

    //main loop
    while (1) {
        printf("\n");
        printf("Sistema de Atendimento Hospitalar\n");
        printf("1. Inserir paciente na fila\n");
        printf("2. Chamar próximo paciente\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome do paciente: ");
                scanf("%s", nome);
                printf("Estado do paciente (1 - Regular, 2 - Ruim, 3 - Péssimo): ");
                scanf("%d", &estado);
                inserirPaciente(nome, estado);
                break;
            case 2:
                chamarProximoPaciente();
                break;
            case 3:
                exit(0);
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

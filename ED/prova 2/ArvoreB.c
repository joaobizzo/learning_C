// Alunos : João Bizzo, Ana Carolina, Vitor Beloto, Sarah Ramos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do nó
typedef struct Node {
    char month[20];
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(const char* month) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {
        strcpy(newNode->month, month);
        newNode->next = NULL;
    }
    return newNode;
}

// Função para inserir um novo nó no final da lista
void insertNode(Node** head, const char* month) {
    Node* newNode = createNode(month);
    if (newNode == NULL) {
        printf("Erro ao alocar memória para o nó.\n");
        return;
    }

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Função para imprimir os meses na lista
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%s\n", current->month);
        current = current->next;
    }
}

// Função principal
int main() {
    Node* monthsList = NULL;

    // Inserir os meses na lista
    insertNode(&monthsList, "Janeiro");
    insertNode(&monthsList, "Fevereiro");
    insertNode(&monthsList, "Março");
    insertNode(&monthsList, "Abril");
    insertNode(&monthsList, "Maio");
    insertNode(&monthsList, "Junho");
    insertNode(&monthsList, "Julho");
    insertNode(&monthsList, "Agosto");
    insertNode(&monthsList, "Setembro");
    insertNode(&monthsList, "Outubro");
    insertNode(&monthsList, "Novembro");
    insertNode(&monthsList, "Dezembro");

    // Imprimir os meses
    printf("Meses do ano:\n");
    printList(monthsList);

    // Liberar a memória alocada
    Node* current = monthsList;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

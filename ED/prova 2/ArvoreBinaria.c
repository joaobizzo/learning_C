// Alunos : João Bizzo, Ana Carolina, Vitor Beloto, Sarah Ramos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct TreeNode {
    char month[10];
    struct TreeNode* left;
    struct TreeNode* right;
};

// Cria um novo nó da árvore com o mês fornecido
struct TreeNode* createNode(const char* month) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        perror("ERRO na alocação de memória");
        exit(EXIT_FAILURE);
    }
    strcpy(newNode->month, month);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insere um nó com o mês fornecido na árvore
struct TreeNode* insertNode(struct TreeNode* root, const char* month) {
    if (root == NULL) {
        return createNode(month);
    }
    if (strcmp(month, root->month) < 0) {
        root->left = insertNode(root->left, month);
    } else if (strcmp(month, root->month) > 0) {
        root->right = insertNode(root->right, month);
    }
    return root;
}

// Percorre a árvore em ordem e imprime os meses
void inoderCross(struct TreeNode* root) {
    if (root != NULL) {
        inoderCross(root->left);
        printf("%s\n", root->month);
        inoderCross(root->right);
    }
}

// Libera a memória alocada para todos os nós da árvore
void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

	struct TreeNode* rootBinaria = NULL;

		printf("-=-=-=- Árvore Binária -=-=-=-\n");

	int i;  // Move the declaration outside the loop
	for (i = 0; i < 12; i++) {
    	char month[10];
    	printf("Digite o %d mes: ", i + 1);
   	 // Usando fgets para evitar buffer overflow
 	   fgets(month, sizeof(month), stdin);
    	// Removendo o caractere de nova linha do final de month
   	 month[strcspn(month, "\n")] = '\0';
   	 rootBinaria = insertNode(rootBinaria, month);
}

	printf("\nMeses em ordem alfabética:\n");
	inoderCross(rootBinaria);

	// Liberando a memória da árvore
	freeTree(rootBinaria);

	return 0;

}
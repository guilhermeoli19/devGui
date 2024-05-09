#include <stdio.h>

#define MAX_SIZE 100

// Função para contar ocorrências de um elemento na lista
int count(int lista[], int tamanho, int elemento) {
    int contador = 0; 
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == elemento) {
            contador++;
        }
    }
    return contador;
}

// Função para encontrar o índice de um elemento na lista
int index(int lista[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == elemento) {
            return i;
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

// Função para inverter a lista
void reverse(int lista[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = lista[i];
        lista[i] = lista[tamanho - i - 1];
        lista[tamanho - i - 1] = temp;
    }
}

// Função para ordenar a lista
void sort(int lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

// Função para adicionar um elemento ao final da lista
void append(int lista[], int *tamanho, int elemento) {
    if (*tamanho < MAX_SIZE) {
        lista[*tamanho] = elemento;
        (*tamanho)++;
    } else {
        printf("Erro: lista cheia.\n");
    }
}

// Função para inserir um elemento em uma posição específica na lista
void insert(int lista[], int *tamanho, int elemento, int posicao) {
    if (*tamanho < MAX_SIZE && posicao >= 0 && posicao <= *tamanho) {
        for (int i = *tamanho; i > posicao; i--) {
            lista[i] = lista[i - 1];
        }
        lista[posicao] = elemento;
        (*tamanho)++;
    } else {
        printf("Erro: posição inválida ou lista cheia.\n");
    }
}

// Função para remover o último elemento da lista
int pop(int lista[], int *tamanho) {
    if (*tamanho > 0) {
        (*tamanho)--;
        return lista[*tamanho];
    } else {
        printf("Erro: lista vazia.\n");
        return -1;
    }
}

// Função para remover a primeira ocorrência de um elemento na lista
void remove_element(int lista[], int *tamanho, int elemento) {
    int indice = index(lista, *tamanho, elemento);
    if (indice != -1) {
        for (int i = indice; i < *tamanho - 1; i++) {
            lista[i] = lista[i + 1];
        }
        (*tamanho)--;
    }
}

int main() {
    int lista[MAX_SIZE] = {5, 3, 7};
    int tamanho = 3;

    // Teste das funções
    printf("Count of 3: %d\n", count(lista, tamanho, 3));
    printf("Index of 7: %d\n", index(lista, tamanho, 7));

    append(lista, &tamanho, 2);
    printf("Lista com inserção:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", lista[i]);
    }
    printf("\n");

    printf("Popped element: %d\n", pop(lista, &tamanho));
    printf("Lista com pop:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", lista[i]);
    }
    printf("\n");

    remove_element(lista, &tamanho, 2);
    printf("Lista com remoção:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", lista[i]);
    }
    printf("\n");

    reverse(lista, tamanho);
    printf("Lista com reversão:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", lista[i]);
    }
    printf("\n");

    sort(lista, tamanho);
    printf("Lista com ordenação:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", lista[i]);
    }
    printf("\n");

    return 0;
}
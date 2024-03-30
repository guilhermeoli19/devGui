#include <stdio.h>

void soma_matrizes(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void preencher_matriz(int n, int m, int matriz[n][m]) {
    int i, j;
    printf("Insira os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int n, int m, int matriz[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Digite o número de linhas: ");
    scanf("%d", &n);
    printf("Digite o número de colunas: ");
    scanf("%d", &m);

    int A[n][m];
    int B[n][m];
    int C[n][m];

    printf("Matriz A:\n");
    preencher_matriz(n, m, A);
    printf("\nMatriz B:\n");
    preencher_matriz(n, m, B);

    soma_matrizes(n, m, A, B, C);

    printf("\nMatriz C (A + B):\n");
    imprimir_matriz(n, m, C);

    return 0;
}

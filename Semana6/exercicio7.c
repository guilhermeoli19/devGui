#include <stdio.h>

void multiplicar_matrizes(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
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
    int n, m, p;
    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz A (e linhas da matriz B): ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &p);

    int A[n][m];
    int B[m][p];
    int C[n][p];

    printf("Matriz A:\n");
    preencher_matriz(n, m, A);
    printf("\nMatriz B:\n");
    preencher_matriz(m, p, B);

    multiplicar_matrizes(n, m, p, A, B, C);

    printf("\nMatriz C (A * B):\n");
    imprimir_matriz(n, p, C);

    return 0;
}

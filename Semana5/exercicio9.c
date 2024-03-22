#include <stdio.h>

void diferenca(int A[], int B[], int tamA, int tamB) {
  int encontrado;

  printf("Elementos Diferentes: ");

  for (int i = 0; i < tamA; i++) {
    encontrado = 0; 

    for (int j = 0; j < tamB; j++) {
      if (A[i] == B[j]) {
        encontrado = 1; 
        break;
      }
    }

    if (!encontrado) {
      printf("%d ", A[i]);
    }
  }
  printf("\n");
}

int main(void) {

int tamA;
int tamB;

  printf("Digite o tamanho do vetor A: ");
  scanf("%d", &tamA);
  printf("Digite o tamanho do vetor B: ");
  scanf("%d", &tamB);

  int A[tamA];
  int B[tamB];

  for (int k = 0; k < tamA; k++){
    printf("Digite os valores do vetor A: ");
    scanf("%d", &A[k]);
}

  for (int l = 0; l < tamB; l++){
    printf("Digite os valores do vetor B: ");
    scanf("%d", &B[l]);
  }

  diferenca(A, B, tamA, tamB);

  return 0;
}

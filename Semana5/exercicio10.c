#include <stdio.h>

void uniao(int A[], int B[], int tA, int tB) {

  for (int i = 0; i < tA; i++) {
    int duplicado = 0; 

    for (int j = 0; j < tB; j++) {
      if (A[i] == B[j]) {
        duplicado = 1;
        break;
      }
    }

    if (!duplicado) {
      printf("%d ", A[i]);
    }
  }

  for (int i = 0; i < tB; i++) {
    int duplicado = 0; 

    for (int j = 0; j < tA; j++) {
      if (B[i] == A[j]) {
        duplicado = 1;
        break;
      }
    }

    if (!duplicado) {
      printf("%d ", B[i]);
    }
  }
  printf("\n");
}

int main() {
  int tamA, tamB, i;

  printf("Tamanho do vetor A: ");
  scanf("%d", &tamA);

  int A[tamA];
  printf("Elementos do vetor A:\n");
  for (i = 0; i < tamA; i++) {
    scanf("%d", &A[i]);
  }

  printf("Tamanho do vetor B: ");
  scanf("%d", &tamB);

  int B[tamB];
  printf("Elementos do vetor B:\n");
  for (i = 0; i < tamB; i++) {
    scanf("%d", &B[i]);
  }

  printf("União: ");
  uniao(A, B, tamA, tamB);

  return 0;
}

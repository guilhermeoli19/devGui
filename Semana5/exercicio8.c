#include <stdio.h>

int interseccao(int v[], int z[], int tamV, int tamZ){
  int elementos_comuns[5];
  int cont = 0;
  for (int i = 0; i < tamV; i++){
    for (int j = 0; j < tamZ; j++){
      if (v[i] == z[j]){
        elementos_comuns[cont++] = v[i];
      }
    }
  }
  if (cont ==  0){
    printf("A ^ B = {}");
  }

  else{
    for(int h = 0; h < cont; h++){
      printf("%d", elementos_comuns[h]);
    }
  }
  return 0;
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

  interseccao(A, B, tamA, tamB);

  return 0;
}
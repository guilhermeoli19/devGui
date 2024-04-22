#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
  if (tam == 0) {
    return 0;
  }
  if (arr[0] % x == 0) {
    return arr[0] + divisiveis(arr + 1, tam - 1, x);
  } else {
    return divisiveis(arr + 1, tam - 1, x);
  }
}

int main() {
  int arr[100];
  int t, x;

  printf("Tamanho do array: ");
  scanf("%d", &t);

  printf("Elementos do array:\n");
  for (int i = 0; i < t; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Valor de x: ");
  scanf("%d", &x);

  int resultado = divisiveis(arr, t, x);

  printf("A soma dos elementos que são divisíveis por %d é: %d\n", x, resultado);

  return 0;
}
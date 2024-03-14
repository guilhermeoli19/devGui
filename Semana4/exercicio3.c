#include <stdio.h>

int tabuada(int num){
  for (int i = 0; i < 11; i++){
    printf("%d x %d = %d\n", num, i, num * i);
  }
}

int main() {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  tabuada(numero);

  return 0;
}
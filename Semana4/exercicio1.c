#include <stdio.h>

float x, y, z, soma;

float soma_valores(x, y, z){
  soma = x + y + z;
  printf("A soma dos valores é %.2f", soma);
}

float valor1, valor2, valor3;

int main() {
  printf("Digite o valor1: ");
  scanf("%f", &valor1);
  printf("Digite o valor2: ");
  scanf("%f", &valor2);
  printf("Digite o valor3: ");
  scanf("%f", &valor3);
  soma_valores(valor1, valor2, valor3);
  return 0;
}
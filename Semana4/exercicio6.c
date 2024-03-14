#include <stdio.h>
#include <math.h>

int soma_valores(int n){
  int sinal = 1;
  float soma = 0;
  for (int k = 1; k <= n; k++){
    soma = soma + (k/pow(k, 2)) * sinal;
    sinal = sinal * (-1);
  }
  printf("A soma é %f", soma);
}

int main(){
  float num;
  printf("Digite um número: ");
  scanf("%f", &num);
  soma_valores(num);
  return 0;
}
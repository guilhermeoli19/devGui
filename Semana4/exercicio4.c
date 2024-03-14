#include <stdio.h>

int divisor(int n, int d){
  if (n % d == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int quantidade_divisores(int m){
  int qntd_div = 0;
  for (int i = 1; i <= m; i++){
    if (divisor(m, i) == 1){
      qntd_div++;
    }
  }
  printf("A quantidade de divisores de é %d", qntd_div);
}

int main(){
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  quantidade_divisores(numero);
  return 0;
}
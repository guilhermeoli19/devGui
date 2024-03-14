#include <stdio.h>

int primo(int n){
  for (int i = 2; i <= n/2; ++i){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

void primos_intervalo(int num1, int num2){
  printf("Os número inteiros entre %d e %d são: ", num1, num2);
  for(int i = num1;i <= num2; ++i){
      if(primo(i)){
          printf("%d ",i);
      }
  }
}

int main(){
  int N1, N2;
  printf("Digite um número: ");
  scanf("%d", &N1);
  printf("Digite um número: ");
  scanf("%d", &N2);
  primos_intervalo(N1, N2);
  return 0;
}

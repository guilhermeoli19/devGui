#include <stdio.h>

int calculadora_numeros() {

  int x;
  int y;
  int soma;
  int subtracao;
  int multiplicacao;
  int divisao;

  printf("Digite o primeiro número inteiro: ");
  scanf("%d", &x);

  printf("Digite o segundo número inteiro: ");
  scanf("%d", &y);

  soma = x + y;
  subtracao = x - y;
  multiplicacao = x * y;
  divisao = x / y;

  printf("A soma é %d\n", soma);
  printf("A subtração é %d\n", subtracao);
  printf("A multiplicação é %d\n", multiplicacao);
  printf("A divisão inteira é %d\n", divisao);

  return 0;
}
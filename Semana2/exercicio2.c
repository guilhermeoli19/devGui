#include <stdio.h>

int calculadora_imc() {

  float peso;
  float altura;
  float IMC;

  printf("Digite o seu peso em Kg: ");
  scanf("%f", &peso);

  printf("Digite a sua altura em m: ");
  scanf("%f", &altura);

  IMC = peso / (altura*altura);

  printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.\n", peso, altura, IMC);

  return 0;
}
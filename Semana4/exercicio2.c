#include <stdio.h>

float c2f(float celsius){
  float celsius_farenheit;
  celsius_farenheit = (celsius * 9/5) + 32;
  printf("A temperatura em farenheit é de %.2f", celsius_farenheit);
}

float f2c(float farenheit){
  float farenheit_celsius;
  farenheit_celsius = (farenheit - 32) * 5/9;
  printf("A temperatura em celsius é de %.2f", farenheit_celsius);
}

int opcao;
float c, f;

int main() {
  printf("(1) Converter de Celsius para Fahrenheit\n");
  printf("(2) Converter de Fahrenheit para Celsius\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);
  if (opcao == 1){
    printf("Digite o valor da temperatura em celsius: ");
    scanf("%f", &c);
    c2f(c);
  }
  else if (opcao == 2) {
    printf("Digite o valor da temperatura em farenheit: ");
    scanf("%f", &f);
    f2c(f);
  }
  return 0;
}

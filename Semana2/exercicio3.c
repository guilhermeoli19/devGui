#include <stdio.h>

int conversor_celsius_farenheit() {

  float celsius;
  float farenheit;

  printf("Digite a temperatura em °C: ");
  scanf("%f", &celsius);

  farenheit = (celsius * 9/5) + 32;

  printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, farenheit);

  return 0;
}
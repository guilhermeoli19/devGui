#include <stdio.h>
#include <math.h>

int area_circulo() {

  float raio;
  float area;

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  area = M_PI * (raio*raio);

  printf("Um círculo com raio %.2f tem área igual a %.2f.\n", raio, area);

  return 0;
}
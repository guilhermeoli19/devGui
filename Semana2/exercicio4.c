#include <stdio.h>
#include <math.h>

int calculo_hipotenusa() {

  float cateto1;
  float cateto2;
  float hipotenusa;

  printf("Digite o valor do cateto 1: ");
  scanf("%f", &cateto1);

  printf("Digite o valor do cateto 2: ");
  scanf("%f", &cateto2);

  hipotenusa = sqrtf((cateto1*cateto1) + (cateto2*cateto2));

  printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f.\n", cateto1, cateto2, hipotenusa);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int advinhar_numero() {

  int numero_sorteado;
  int numero_usuario;

  srand(time(NULL));
  numero_sorteado = rand() %100 + 1;

  printf("Digite o seu palpite (1 a 100): ");
  scanf("%d", &numero_usuario);

  while(numero_usuario < 1 || numero_usuario > 100){
    printf("Digite um palpite válido (1 a 100): ");
    scanf("%d", &numero_usuario);
  }

  if(numero_usuario > numero_sorteado){
    printf("Você chutou muito alto! O valor correto é %d.", numero_sorteado);
  }
  else if(numero_usuario < numero_sorteado){
    printf("Você chutou muito baixo! O valor correto é %d.", numero_sorteado);
  }
  else{
    printf("Parabéns!! Você acertou!");
  }

  return 0;
}
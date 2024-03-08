#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int advinhar_numero_limite_tentativas() {

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

  if(numero_usuario > numero_sorteado)
    {
        printf("Você chutou muito alto!\n");
      }
    else if(numero_usuario < numero_sorteado)
    {
        printf("Você chutou muito baixo!\n");
      }

  for(int i = 1; i < 5; i++){
    if(numero_usuario != numero_sorteado){
      printf("Digite um novo palpite (1 a 100): ");
      scanf("%d", &numero_usuario);
      if(numero_usuario > numero_sorteado)
      {
          printf("Você chutou muito alto!\n");
        }
      else if(numero_usuario < numero_sorteado)
      {
          printf("Você chutou muito baixo!\n");
        }
      else{
          printf("Parabéns!! Você acertou!\n");
      }
    }
    else{
      printf("Você excedeu o número máximo de tentativas. O número sorteado era %d", numero_sorteado);
    }
  }
  printf("Você excedeu o número máximo de tentativas. O número sorteado era %d", numero_sorteado);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int advinhar_numero_ate_acertar() {

  int numero_sorteado;
  int numero_usuario;
  int numero_de_tentativas = 0;

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

  while(numero_usuario != numero_sorteado){
    printf("Digite um novo palpite (1 a 100): ");
    scanf("%d", &numero_usuario);
    numero_de_tentativas++;
    if(numero_usuario > numero_sorteado)
    {
        printf("Você chutou muito alto!\n");
      }
    else if(numero_usuario < numero_sorteado)
    {
        printf("Você chutou muito baixo!\n");
      }
  }
  printf("Parabéns!! Você acertou!\n");
  printf("Número de Tentativas: %d", numero_de_tentativas + 1);
  return 0;
}
#include <stdio.h>

int buscabinaria(int arr[], int esq, int dir, int alvo) {
    if (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo)
            return meio; 
        else if (arr[meio] < alvo)
            return buscabinaria(arr, meio + 1, dir, alvo);
        else
            return buscabinaria(arr, esq, meio - 1, alvo); 
    }

    return -1;
}

int main() {
    int array_exemplo[] = {1, 3, 5, 7, 9, 11, 13}; //
    int n = sizeof(array_exemplo) / sizeof(array_exemplo[0]);
    int alv;
    printf("Alvo: ");
    scanf("%d", &alv);

    int resultado = buscabinaria(array_exemplo, 0, n - 1, alv);

    if (resultado != -1){
      printf("Elemento %d encontrado na posição %d.\n", alv, resultado);
    }
    else{
      printf("Elemento %d não foi encontrado no array.\n", alv);
    }

    return 0;
}
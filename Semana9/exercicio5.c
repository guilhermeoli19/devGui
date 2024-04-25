#include <stdio.h>
#include <math.h>

int reverso(int num) {
    int digito = (int)log10(num);

    if (num == 0)
        return 0;

    return ((num % 10) * pow(10, digito)) + reverso(num / 10);
}

int main() {
    int num, rev;

    printf("Número Inteiro: ");
    scanf("%d", &num);

    rev = reverso(num);

    printf("Número Inteiro Reverso: %d", rev);
    return 0;
}
int numero_perfeito() {
    int num;
    int soma_divisores = 0;

    printf("Escreva um número Inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }

    if (num * 2 == soma_divisores){
        printf("%d é um número inteiro perfeito\n", num);
    }

    else{
        printf("%d NÃO é um número inteiro perfeito\n", num);
    }

    return 0;
}
int divisores() {
    int num;
    printf("Número Inteiro: ");
    scanf("%d", &num);

    printf("Divisores de %d são: \n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d é divisor de %d\n", i, num);
        }
    }

    return 0;
}
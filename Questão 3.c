#include <stdio.h>

int main() {
    int valor;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    if (valor < 2) {
        printf("Erro: valor insuficiente para saque (minimo R$2).\n");
        return 0;
    }
    if (valor % 2 == 1 && valor % 5 != 0) {
        printf("Erro: nao e possivel pagar o valor exato R$%d.\n", valor);
        return 0;
    }
    
    n100 = valor / 100;
    valor %= 100;

    n50 = valor / 50;
    valor %= 50;

    n20 = valor / 20;
    valor %= 20;

    n10 = valor / 10;
    valor %= 10;

    n5 = valor / 5;
    valor %= 5;

    n2 = valor / 2;
    valor %= 2;

    printf("Cedulas entregues:\n");
    if (n100 > 0) printf("%d de R$100\n", n100);
    if (n50 > 0)  printf("%d de R$50\n", n50);
    if (n20 > 0)  printf("%d de R$20\n", n20);
    if (n10 > 0)  printf("%d de R$10\n", n10);
    if (n5 > 0)   printf("%d de R$5\n", n5);
    if (n2 > 0)   printf("%d de R$2\n", n2);

    return 0;
}


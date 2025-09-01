#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC = %f", imc);

    if (imc < 18.5) {
        printf("Voce esta: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Voce esta no: Peso normal\n");
    } else if (imc < 30) {
        printf("Voce esta em: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Voce esta em: Obesidade grau I\n");
    } else if (imc < 40) {
        printf("Voce esta em: Obesidade grau II\n");
    } else {
        printf("Voce esta em: Obesidade grau III\n");
    }

    return 0;
}


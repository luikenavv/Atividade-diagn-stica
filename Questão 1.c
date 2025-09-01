#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Os lados formam um triangulo. \n");

        if (a == b && b == c) {
            printf("Tipo: Equilatero");
        } else if (a == b || a == c || b == c) {
            printf("Tipo: Isosceles");
        } else {
            printf("Tipo: Escaleno");
        }
    } else {
        printf("Os valores nao formam nenuhum tiangulo.\n");
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

double calcular_raiz_quadrada(double n, double precisao) {
    double b = 2.0;
    double p;

    while (1) {
        p = (b + n / b) / 2.0;
        if (fabs(p * p - n) < precisao)
            return p;
        b = p;
    }
}

int main() {
    double numero;
    double precisao = 0.0001;

    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("O número deve ser não-negativo.\n");
        return 1;
    }

    double raiz_aproximada = calcular_raiz_quadrada(numero, precisao);

    printf("A raiz quadrada aproximada de %.2lf é: %.2lf\n", numero, raiz_aproximada);

    return 0;
}


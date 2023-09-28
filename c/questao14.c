#include <stdio.h>

int calcular_resto_divisao(int dividendo, int divisor) {
    while (dividendo >= divisor) {
        dividendo = dividendo - divisor;
    }
    return dividendo;
}

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Divisão por zero!\n");
        return 1;
    }

    int resto = calcular_resto_divisao(dividendo, divisor);
    printf("O resto da divisão de %d por %d é: %d\n", dividendo, divisor, resto);

    return 0;
}

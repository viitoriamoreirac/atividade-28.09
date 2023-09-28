#include <stdio.h>

int eh_palindromo(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    return original == invertido;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (eh_palindromo(numero)) {
        printf("%d é um palíndromo.\n", numero);
    } else {
        printf("%d não é um palíndromo.\n", numero);
    }

    return 0;
}

#include <stdio.h>

    float maior(float num1, float num2, float num3) {
        if (num1 >= num2 && num1 >= num3) {
            return num1;
        } else if (num2 >= num1 && num2 >= num3) {
            return num2;
        } else {
            return num3;
        } 
    }

    float menor(float num1, float num2, float num3) {
        if (num1 <= num2 && num1 <= num3) {
            return num1;
        } else if (num2 <= num1 && num2 <= num3) {
            return num2;
        } else {
            return num3;
        } 
    }

int main() {
    float num1, num2, num3, maiorNumero, menorNumero;

    printf("Digite 3 números separados por espaço: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    maiorNumero = maior(num1, num2, num3);
    menorNumero = menor(num1, num2, num3);

    printf("O maior número é: %.2f.\n O menor número é: %.2f.\n", maiorNumero, menorNumero);

    return 0;
}

#include <stdio.h>

int main() {
    char opcao;
    float num1, num2, resultado;

    printf("Digite os dois números separados por espaço: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf("%s", &opcao);

    switch (opcao)
    {
    case '+':
        resultado = num1 + num2;
        printf("O resultado é: %.1f\n", resultado);
        break;
    case '-':
        resultado = num1 - num2;
        printf("O resultado é: %.1f\n", resultado);
        break;
    case '*':
        resultado = num1 * num2;
        printf("O resultado é: %.1f\n", resultado);
        break;
    case '/':
        resultado = num1 / num2;
        printf("O resultado é: %.1f\n", resultado);
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}
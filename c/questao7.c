#include <stdio.h>

int main() {
    float salario, aumento;

    printf ("Qual o valor do salário? ");
    scanf("%f", &salario);

    if (salario > 1250) {
        aumento = salario + salario/10;
    } else {
        aumento = salario + salario * 0.15;
    }

    printf ("%.2f", aumento);
    return 0;
}
#include <stdio.h>

int main() {
    float casa, salario, anos, prestacao;

    printf("Qual o valor da casa? ");
    scanf("%f", &casa);

    printf("Qual o valor do salário? ");
    scanf("%f", &salario);

    printf("Em quando anos deseja pagar? ");
    scanf("%f", &anos);

    prestacao = casa / (anos * 12);

    float prestacaoMaxima = salario * 0.3;
    if(prestacao > prestacaoMaxima) {
        printf("O empréstimo não foi aprovado.\n");
    } else {
        printf("Aprovado!");
    }

    return 0;
}
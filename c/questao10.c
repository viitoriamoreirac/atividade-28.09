#include <stdio.h>

int main() {
    float price, consumo;
    char installation;

    printf("Qual o consumo? ");
    scanf("%f", &consumo);

    printf("Qual o tipo de residência? (R para residências, I para indústrias e C para comércios) ");
    scanf("%s", &installation);

    switch (installation)
    {
    case 'R':
        if (consumo <= 500) {
            price = consumo * 0.4;
        } else {
            price = consumo * 0.65;
        }
        break;
    case 'I':
        if (consumo <= 1000) {
            price = consumo * 0.55;
        } else {
            price = consumo * 0.6;
        }
        break;
    case 'C':
        if (consumo <= 5000) {
            price = consumo * 0.55;
        } else {
            price = consumo * 0.6;
        }
        break;
    default:
        printf("Opção de instalação inválida!");
        break;
    }

    printf("O valor a pagar será R$ %.2f\n", price);


    return 0;
}
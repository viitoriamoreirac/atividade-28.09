#include <stdio.h>


int calcula(int operador) {
    switch(operador){
        case 1: // SOMA
        for(int contador = 1; contador <= 10; contador++){
            printf("\nTabuada do %d\n:", contador);
            for(int i = 1; i <= 10; i++) {
                printf("%d + %d = %d\n", contador, i, contador + i);
            }
        }
        break;
        case 2: // SUBTRAÇÃO
        for(int contador = 1; contador <= 10; contador++){
            printf("\nTabuada do %d\n:", contador);
            for(int i = 1; i <= 10; i++) {
                printf("%d - %d = %d\n", contador, i, contador - i);
            }
        }
        break;
        case 3: // MULTIPLICAÇÃO
        for(int contador = 1; contador <= 10; contador++){
            printf("\nTabuada do %d\n:", contador);
            for(int i = 1; i <= 10; i++) {
                printf("%d X %d = %d\n", contador, i, contador * i);
            }
        }
        break;
        case 4: // DIVISÃO
        for(int contador = 1; contador <= 10; contador++){
            printf("\nTabuada do %d\n:", contador);
            for(int i = 1; i <= 10; i++) {
                printf("%d / %d = %d\n", contador, i, contador / i);
            }
        }
        break;
        default:
        printf("Opção inválida, tente novamente!\n");
    }
    return 0;
}
int main()
{
    int opcao = 1;
   
    while (opcao != 5){
        printf("Digite 1 para adição.\n");
        printf("Digite 2 para subtração.\n");
        printf("Digite 3 para multiplicação.\n");
        printf("Digite 4 para divisão.\n");
        printf("Digite 5 para sair.\n");
       
        scanf("%d", &opcao);
        if (opcao == 5){
            printf("Obrigado, até a próxima!\n");
        } else{
            calcula(opcao);
        }
    }

    return 0;
}
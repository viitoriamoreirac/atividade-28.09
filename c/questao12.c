#include <stdio.h>


int primo(int number) {

    if (number < 2) return 0;

    int i;
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}
int main() {

    int number;

    printf("Digite o número que deseja testar: ");
    scanf("%d", &number);

    if (primo(number)){
        printf("É PRIMO!\n");
    } else{
        printf("NÃO É PRIMO!\n");
    }
    return 0;
}
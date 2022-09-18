#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int secret_number, input_number;
    int menor = 0;
    int maior = 100;
    
    srand(time(0));
    secret_number = rand() % 101;

    printf("Digite um numero entre 0 e 100: ");
    scanf("%i", &input_number);

    do {

        if (input_number < secret_number) {
            menor = input_number;
            printf("Palpite: O numero esta entre %i e %i: ", menor, maior);
            scanf("%i", &input_number);
        }
        else if (input_number > secret_number) {
            maior = input_number;
            printf("Palpite: O numero esta entre %i e %i: ", menor, maior);
            scanf("%i", &input_number);
        }

    } while (input_number != secret_number);

    printf("\nParabens, voce acertou o numero secreto!!\n\n");

    return 0;
}
/*
    Escreva um programa que receba um n�mero.
    Este programa dever� exibir na tela a tabuada de multiplica��o deste n�mero.
    Crie uma subrotina para realizar os calculos.
*/

#include <stdio.h>

void multiplicacao (int n) {
    for(int i = 0; i < 11; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main() {

    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    multiplicacao(num);

    return 0;
}
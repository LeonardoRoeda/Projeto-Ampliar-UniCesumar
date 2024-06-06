/*
    Escreva um programa, que exiba o seguinte menu ao usu�rio:

    1. Soma
    2. Divis�o
    3. Multiplica��o
    4. Subtra��o
    5. Sair

    O usu�rio dever� informar 2 n�meros ap�s escolher a opera��o.
    O programa s� pode ser encerrado quando o usu�rio escolher a op��o de sair.
    Cada opera��o dever� ser uma subrotina.
    A entrada de dados, tamb�m dever� ser uma subrotina.

    N�O USE VARIAVEIS GLOBAIS
*/


#include <stdio.h>
#include <locale.h>

void soma(int n, int n2){
   int result =  n + n2;
   printf("%d\n", result);
}

void sub(int n, int n2){
   int result =  n - n2;
   printf("%d", result);
}

void multip(int n, int n2){
   int result =  n * n2;
   printf("%d", result);
}

void divisao(int n, int n2){
   int result =  n / n2;
   printf("%d", result);
}

int operacao(){
    int n;
    printf("Insira um numero: \n");
    scanf("%d", &n);
    return n;
}

int main() {
    int num1, num2, opc;
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("\nEscolha uma opcao: \n");
        printf("1. Soma.\n2. Divis�o.\n3. Multiplica��o.\n4. Subtra��o.\n5. Sair.");
        scanf("%d", &opc);

        switch(opc){
            case 1 : 
                num1 = operacao();
                num2 = operacao();
                soma(num1, num2);
                break;

            case 2 : 
                num1 = operacao();
                num2 = operacao();
                divisao(num1, num2);
                break;

            case 3 : 
                num1 = operacao();
                num2 = operacao();
                multip(num1, num2);
                break;

            case 4 : 
                num1 = operacao();
                num2 = operacao();
                sub(num1, num2);
                break;

            case 5 : 
                printf("Programa encerrado!");
                return 0;

            default :
                printf("Opcao invalida.");
                break;
        }

    }while (1);

}
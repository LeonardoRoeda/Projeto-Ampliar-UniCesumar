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
*/


#include <stdio.h>
#include <locale.h>

int n, n2;

void soma(){
   int result =  n + n2;
   printf("%d\n", result);
}

void sub(){
   int result =  n - n2;
   printf("%d", result);
}

void multip(){
   int result =  n * n2;
   printf("%d", result);
}

void divisao(){
   int result =  n / n2;
   printf("%d", result);
}

void operacao(){
    printf("Insira um numero: \n");
    scanf("%d", &n);
    
    printf("Insira outro numero: \n");
    scanf("%d", &n2);
}

int main() {
    int opc;
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Escolha uma opcao: \n");
        printf("1. Soma.\n2. Divis�o.\n3. Multiplica��o.\n4. Subtra��o.\n5. Sair. \n ");
        scanf("%d", &opc);

        switch(opc){
            case 1 : 
                operacao();
                soma();
                break;

            case 2 : 
                operacao();
                divisao();
                break;

            case 3 : 
                operacao();
                multip();
                break;

            case 4 : 
                operacao();
                sub();
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
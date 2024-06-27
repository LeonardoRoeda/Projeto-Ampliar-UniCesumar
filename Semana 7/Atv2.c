#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("./teste.txt", "r");

    if (!arquivo) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    fprintf(arquivo, "KAUAN � O MELHOR!\n");
    fseek(arquivo, 0, SEEK_SET);
    char str[100];

    fgets(str, sizeof(str), arquivo);
    printf("Conte�do do arquivo: \n%s", str);

    fclose(arquivo);

    return 0;
}
#include <stdio.h>

int main(){

    FILE * fp;
    char nomearq[40], ch;

    printf("Escreva o nome do arquivo: \n");
    scanf("%39[^\n]", nomearq);

    if((fp = fopen(nomearq, "r")) == NULL){
        printf("Erro de abertura do arquivo %s\n", nomearq);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF){
        fputc(ch, stdout);
    }

    fclose(fp);

    return 0;
}
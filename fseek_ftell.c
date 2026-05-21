#include <stdio.h>

int main(){

    FILE * fp = fopen("testando_fseek_ftell.txt", "r");

    if(fp == NULL){
        fprintf(stderr, "Erro: arquivo nao encontrado.\n");
        return 1;
    }

    long pos;
    char ch;

    pos = ftell(fp); ch = fgetc(fp);
    printf("Posicao: %ld | Caractere: %c\n", pos, ch);

    fseek(fp, 6, SEEK_SET);
    pos = ftell(fp); ch = fgetc(fp);
    printf("Posicao: %ld | Caractere: %c\n", pos, ch);

    fseek(fp, 2, SEEK_CUR);
    pos = ftell(fp); ch = fgetc(fp);
    printf("Posicao: %ld | Caractere: %c\n", pos, ch);

    fseek(fp, -3, SEEK_END);
    pos = ftell(fp); ch = fgetc(fp);
    printf("Posicao: %ld | Caractere: %c\n", pos, ch);

    fclose(fp);

    return 0;
}


/*

SEEK_SET → conta a partir do início
SEEK_CUR → conta a partir de onde o cursor está agora
SEEK_END → conta a partir do final

OBS: fgetc() le o caractere e avanca o cursor em +1 automaticamente

*/
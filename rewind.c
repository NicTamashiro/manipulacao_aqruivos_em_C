#include <stdio.h>

int main(int argc, char * argv[]){

    if (argc != 2){
        printf("Uso: %s <nomearq>\n", argv[0]);
        return 1;
    }

    FILE * fp = fopen(argv[1], "r");
    if (fp == NULL){
        printf("Erro: arquivo nao encontrado.\n");
        return 1;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF){
        fputc(ch,stdout);
    }

    rewind(fp);

    FILE * copia = fopen("copia.txt", "w");

    if (copia == NULL){
        fprintf(stderr, "Erro: nao foi possivel criar \"copia.txt\"\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF){
        fputc(ch,copia);
    }

    fclose(fp);
    fclose(copia);

    printf("\nCopia realizada com sucesso!\n");

    return 0;
}
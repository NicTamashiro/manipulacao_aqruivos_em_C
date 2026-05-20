#include <stdio.h>

int main(){

    if (rename("teste_para_rename.txt", "novo_rename.txt") == 0){
        printf("Arquivo renomeado com sucesso!\n");
    } else {
        printf("Erro ao renomear arquivo.\n");
    }

    return 0;
}
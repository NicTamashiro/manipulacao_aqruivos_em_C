#include <stdio.h>

int main(){

    FILE * fp;

    if ((fp = fopen("teste.txt", "w")) == NULL){
        printf("Erro de abertura do arquivo");
        return 1;
    }


    return 0;
}
#include <stdio.h>

int main(){

    if (remove("testeParaDeletar.txt") == 0){
        printf("Arquivo apagado com sucesso!\n");
    } else{
        printf("Erro ao apagar arquivo.\n");
    }

    return 0;
}
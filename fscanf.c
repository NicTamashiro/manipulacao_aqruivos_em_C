#include <stdio.h>

int main(){

    FILE * fp;
    char nome[50];
    int idade;
    float altura;

    if((fp = fopen("dados.txt", "r")) == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    fscanf(fp, "Nome: %[^\n]\n", nome);
    fscanf(fp, "Idade: %d\n", &idade);
    fscanf(fp, "Altura: %f\n", &altura);

    fclose(fp);

    printf("\nInformacoes encontradas no arquivo \"dados.txt\"");
    
    printf("\n\nNome: %s\n", nome); 
    printf("Idade: %d\n", idade); 
    printf("Altura: %.2f\n", altura); 
    return 0;
}
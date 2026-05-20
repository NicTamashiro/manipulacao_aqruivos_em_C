#include <stdio.h>

int main(){

    FILE * fp;
    char nome[50];
    int idade; 
    float altura;

    if((fp = fopen("dados.txt", "w")) == NULL){
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    printf("Digite seu nome: ");
    scanf("%49[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sau altura: ");
    scanf("%f", &altura);

    fprintf(fp, "Nome: %s\n", nome);
    fprintf(fp, "Idade: %d\n", idade);
    fprintf(fp, "Altura: %.2f\n", altura);

    printf("Suas informacoes foram passadas para o arquivo \"dados.txt\"");

    fclose(fp);

    return 0;
}
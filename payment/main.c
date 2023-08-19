#include <stdio.h>
#include <string.h>

int main() {
    char nome_filho [50];
    char nome_pai [50];
    char nome_mae [50];

    printf("Digite seu nome:\n");
    fgets(nome_filho,50,stdin);
    nome_filho[strlen(nome_filho)-1]='\0';

    printf("Digite o nome do seu pai :\n");
    fgets(nome_pai,50,stdin);
    nome_pai[strlen(nome_pai)-1]='\0';

    printf("Digite o nome da sua mae:\n");
    fgets(nome_mae,50,stdin);
    nome_mae[strlen(nome_pai)-1]='\0';

    printf("O nome do seu pai é:%s/ O nome da sua mae é:%s/ E o seu é: %s",nome_pai,nome_mae, nome_filho);
    return 0;
};

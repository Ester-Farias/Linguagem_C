#include <stdio.h>

#define tam_nome_cliente 100

struct client {
    char nome [tam_nome_cliente];
    int idade;
};

int main(){
    struct client cli;
    int classificacao_filme;

    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, tam_nome_cliente, stdin);

    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificação do filme: ");
    scanf("%d", &classificacao_filme);

    printf("\n Cliente: %s", cli.nome);
    printf("\n Idade: %d anos"; cli.idade);
    printf("\n Classificação do filme: %d anos", classificacao_filme);
    return 0;

}

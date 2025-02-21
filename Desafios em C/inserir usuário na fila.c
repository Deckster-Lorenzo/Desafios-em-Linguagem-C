#include <stdio.h>
#include <stdlib.h>



struct pessoa{
    char nome[50];
    int idade;
    char cpf[15];
};

typedef struct pessoa pessoa;


struct no{
    pessoa dados;
    struct no *prox;
};

typedef struct no no;






int main(){

    no lista;
    lista.prox = NULL;
    pessoa info;


    printf("Digite o nome do novo usuario: ");
    scanf("%49[^\n]s", &info.nome);
    fflush(stdin);
    printf("Digite a idade do usuario: ");
    scanf("%d", &info.idade);
    fflush(stdin);
    printf("Digite o CPF do usuario: ");
    scanf("%s", &info.cpf);
    fflush(stdin);

    insereFim(&lista, info);

    printf("\n......Imprimindo usuarios da lista......\n\n");

    imprime(&lista);





    return 0;
}


void insereFim (no* lista, pessoa dados){
    no *novo = (no*)malloc(sizeof(no));
    novo->dados = dados;
    novo->prox = NULL;

    printf("\nNovo usuario cadastrado com sucesso\n\n");

    no *aux = lista;

    while (aux->prox != NULL){
            aux = aux->prox;
    }
    aux->prox = novo;
}

void imprime(no* lista){
    no *aux = lista->prox;
    printf("\n");
    int i=0;
    while(aux != NULL){
        printf("Nome do usuario: %s\n", aux->dados.nome);
        printf("Idade do usuario: %d\n", aux->dados.idade);
        printf("CPF do usuario: %s\n", aux->dados.cpf);
        i++;
        aux = aux->prox;
    }
        printf("Total de usuarios cadastrados: %d\n\n", i);
}



























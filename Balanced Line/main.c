#include "stdio.h"
#include "stdlib.h"

typedef struct lista
{
    int pos;
    char nome[21];
    struct lista *prox;
}lista;

void inserir(lista **p,int pos, char *nome)
{
    lista *atual, *novo, *anterior;
    novo = (lista *) malloc(sizeof(lista));

    atual = *p;
    anterior = NULL;

    novo->pos = pos;
    sprintf(novo->nome,"%s",nome);

    if(atual == NULL){
        novo->prox = NULL;
        *p = novo;
    } else{
        while(atual != NULL && atual->pos < pos){
            anterior = atual;
            atual = atual->prox;
        }

        novo->prox = atual;

        if(anterior == NULL){
            *p = novo;
        } else{
            anterior->prox = novo;
        }
    }
}


void imprimirLista(lista *p,FILE *arq)
{
    while(p != NULL)
    {
        fprintf(arq,"%d%s\n", p->pos,p->nome);
        p = p->prox;
    }
}

lista *destruirLista(lista *l)
{
    if(l==NULL)
    {
        return NULL;
    }else
    {
        l->prox = destruirLista(l->prox);
        free(l);
        return l;
    }
}

int main()
{
    FILE *arq;
    lista *l = NULL;
    char nomearq[21],nome[21];
    int posicao;
    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s",nomearq);
    arq = fopen(nomearq,"r");
    fscanf(arq,"%s %s\n%s\n",nome,nome,nome);
    while(!feof(arq))
    {
        fscanf(arq,"%d%s\n",&posicao,nome);
        inserir(&l,posicao,nome);
    }
    fclose(arq);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s",nomearq);
    arq = fopen(nomearq,"r");
    fscanf(arq,"%s %s\n%s\n",nome,nome,nome);
    while(!feof(arq))
    {
        fscanf(arq,"%d%s\n",&posicao,nome);
        inserir(&l,posicao,nome);
    }
    fclose(arq);
    arq = fopen("Resultado.txt","w");
    imprimirLista(l,arq);
    l = destruirLista(l);
    fclose(arq);
    system("Resultado.txt");

}


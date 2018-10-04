#include "ListaDesenhos.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int ordem = 0;

Desenho* inicia_desenho()
{
    Desenho *novo = (Desenho*)malloc(sizeof(Desenho));
    if(!novo)
    {
        printf("ERRO AO ALOCAR MEMORIA PARA O DESENHO");
    }
    novo->prox = NULL;
    novo->ordemDesenho = ordem;
    ordem++;
    novo->vertices = NULL;
    novo->qtdVertices = 0;
    ordem++;
    return novo;
}

Vertice* cria_vertice(double x,double y)
{
    Vertice *novo = (Vertice*)malloc(sizeof(Vertice));
    if(!novo)
    {
        printf("ERRO AO ALOCAR MEMORIA PARA O VERTICE");
    }
    novo->x = x;
    novo->y = y;
    novo->prox = NULL;
    return novo;
}

void imprime_cor(Cor c)
{
    printf("R: %f     G: %f     B: %f    T: %f",c.r,c.g,c.b,c.t);
}

void imprime_vertices(Vertice* ve)
{
    printf("X: %f   Y: %f\n",ve->x,ve->y);
    if(ve->prox)
        imprime_vertices(ve->prox);
}

void imprime_info_desenhos(ListaD* lista)
{
    if(lista->head == NULL)
    {
        printf("Lista vazia.");
    }
    else
    {
        Desenho* d = lista->head;
        while(d != NULL){
        printf("########################################\n");
        printf("INFORMACOES DO DESENHO:\nOrdem:%d\n",d->ordemDesenho);
        printf("QTD_VERTICES: %d\nCOR:",d->qtdVertices);
        imprime_cor(d->corPolig);
        printf("\nVertices:\n");
        imprime_vertices(d->vertices);
        printf("########################################\n");
        d = d->prox;
        }
    }


}

void adiciona_vertice_desenho(Desenho* pol,Vertice* ve)
{
    if(!pol->vertices) //Logo não contem nenhum vertice.
    {
        pol->vertices = ve;
        pol->qtdVertices++;
    }
    else
    {
        Vertice* tmp = pol->vertices;
        while(tmp->prox != NULL)
        {
            tmp = tmp->prox;
        }
        tmp->prox = ve;
        ve->ant = tmp;
        pol->qtdVertices++;

    }
}

void adiciona_novo_desenho(ListaD* lista, Desenho* novo)
{
    if(!lista->head)
    {
        lista->head = novo;
        lista->head->ordemDesenho++;
    }
    else
    {
        Desenho* tmp = lista->head;
        while(tmp->prox != NULL)
        {
            tmp = tmp->prox;
        }
        tmp->prox = novo;
        novo->ant = tmp;
    }
}

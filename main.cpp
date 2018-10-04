#include <iostream>
#include "ListaDesenhos.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    ListaD* listaDesenhos = (ListaD*)malloc(sizeof(ListaD));
    listaDesenhos->head = NULL;


    Desenho* d1 = inicia_desenho();
    Vertice* v1 = cria_vertice(1.0,2.0);
    Vertice* v2 = cria_vertice(4.0,5.0);
    Vertice* v3 = cria_vertice(24.0,33.0);
    adiciona_vertice_desenho(d1,v1);
    adiciona_vertice_desenho(d1,v2);
    adiciona_vertice_desenho(d1,v3);

    Desenho* d2 = inicia_desenho();
    Vertice* v21 = cria_vertice(75.0,51.0);
    Vertice* v22 = cria_vertice(867.0,768.0);
    Vertice* v23 = cria_vertice(244.0,0.0);
    adiciona_vertice_desenho(d2,v21);
    adiciona_vertice_desenho(d2,v22);
    adiciona_vertice_desenho(d2,v23);

    Desenho* quadrado = inicia_desenho();
    Vertice* p1 = cria_vertice(0.0,0.0);
    Vertice* p2 = cria_vertice(100.0,0.0);
    Vertice* p3 = cria_vertice(100.0,100.0);
    Vertice* p4 = cria_vertice(0.0,100.0);
    adiciona_vertice_desenho(quadrado,p1);
    adiciona_vertice_desenho(quadrado,p2);
    adiciona_vertice_desenho(quadrado,p3);
    adiciona_vertice_desenho(quadrado,p4);
    Cor corQuadrado;
    corQuadrado.r=1.0;
    quadrado->corPolig = corQuadrado;


    adiciona_novo_desenho(listaDesenhos,d1);
    adiciona_novo_desenho(listaDesenhos,d2);
    adiciona_novo_desenho(listaDesenhos,quadrado);
    imprime_info_desenhos(listaDesenhos);

}


typedef struct color{
    double r;
    double g;
    double b;
    double t;
}Cor;

typedef struct vert{
    //Info
    double x;
    double y;

    //Ponteiros
    struct vert *prox;
    struct vert *ant;
}Vertice;

typedef struct des{
    //Info
    int ordemDesenho;
    Cor corPolig;
    int qtdVertices;
    //Ponteiros
    Vertice *vertices;
    struct des *prox;
    struct des *ant;
}Desenho;

 typedef struct listaDesenhos{
    Desenho* head;
 }ListaD;

/*
 *  <Fun��o>:             inicia_desenho.
 *  <Parametros>:         N�o recebe parametros.
 *  <Funcionalidade>:     Inicializa a estrutura de desenho, aloca o espa�o na memoria.
 *  <Retorno>:            Ponteiro para o Desenho.
 */
Desenho* inicia_desenho();

/*
 *  <Fun��o>:             cria_vertice
 *  <Parametros>:         Recebe como parametros os as coordenadas X e Y do vertice (Double)
 *  <Funcionalidade>:     Inicializa a estrutura de vertice, aloca o espa�o na memoria, atribui os valores.
 *  <Retorno>:            Ponteiro para o Desenho.
 */
Vertice* cria_vertice(double x,double y);

void imprime_cor(Cor c);

void imprime_vertices(Vertice* ve);

void imprime_info_desenhos(ListaD* lista);

void adiciona_vertice_desenho(Desenho* pol,Vertice* ve);

void adiciona_novo_desenho(ListaD* lista, Desenho* novo);

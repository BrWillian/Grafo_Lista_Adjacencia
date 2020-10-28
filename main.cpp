#include <iostream>
#include <grafo.h>


int main()
{
    Grafo grafo(5);

    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 3);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(1, 4);
    grafo.adicionarAresta(3, 1);
    grafo.adicionarAresta(3, 2);
    grafo.adicionarAresta(4, 1);

    std::cout<<"Grau de saida de vertice 1: "<<grafo.obterGrau(1)<<std::endl;

    if(grafo.existeVizinho(0, 1))
    {
        std::cout<<"E vizinho"<<std::endl;
    }else{
        std::cout<<"Nao e vizinho"<<std::endl;
    }

    return 0;

}

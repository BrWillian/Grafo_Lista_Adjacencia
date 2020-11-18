#include <iostream>
#include <grafo.h>


int main()
{
    Grafo grafo(8);

    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 2);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(1, 4);
    grafo.adicionarAresta(2, 5);
    grafo.adicionarAresta(2, 6);
    grafo.adicionarAresta(6, 7);

    grafo.dfs(0);

    cout<<"\n---------------"<<endl;

    grafo.bfs(0);

    cout<<"\n---------------"<<endl;

    return 0;

}

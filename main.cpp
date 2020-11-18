#include <iostream>
#include <grafo.h>


int main()
{
    Grafo grafo(4);

    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 2);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(3, 0);

    grafo.dfs(0);

    cout<<"\n---------------"<<endl;

    grafo.bfs(0);

    cout<<"\n---------------"<<endl;


    if(grafo.temCiclo())
    {
        cout<<"tem ciclo";
    }else{
        cout<<"nao tem ciclo";
    }

    return 0;

}

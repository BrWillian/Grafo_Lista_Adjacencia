#include "grafo.h"
#include <algorithm>

Grafo::Grafo(int V)
{
    this->V = V;  // atribui o numero de vertices
    adj = new list<int>[V]; // cria a lista de adjacencias
}
void Grafo::adicionarAresta(int v1, int v2)
{
    // adicionar vertice v2 a lista de vertices adjacentes de v1
    adj[v1].push_back(v2);
}
int Grafo::obterGrau(int v)
{
    // tamanho da lista que e a quantidade de vizinhos
    return adj[v].size();
}
bool Grafo::existeVizinho(int v1, int v2)
{
    // procura o vizinho na lista de adjencia
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
    {
        return true;
    }
    return false;
}


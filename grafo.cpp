#include "grafo.h"
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

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
vector<int> Grafo::listarVizinhos(int v)
{
    vector<int>vectTmp;


    for (std::list<int>::iterator it = adj[v].begin(); it != adj[v].end(); it++)
        std::cout << *it << ' ';
} 
void Grafo::dfs(int v)
{
    stack<int>pilha;
    vector<bool>visitados(V, false);

    pilha.push(v);

    while(!pilha.empty())
    {
        v = pilha.top();
        pilha.pop();
        if(!visitados[v])
        {
            std::cout<<v<<" ";
            visitados[v] = true;
        }

        list<int>::iterator it;
        for(it=adj[v].begin(); it!=adj[v].end(); it++)
        {
            if(!visitados[*it])
            {
                pilha.push(*it);
            }
        }
    }

}

void Grafo::bfs(int v)
{
    list<int> fila;
    bool visitados[V];

    for(int i=0; i<V; i++)
    {
        visitados[i] = false;
    }

    visitados[v] = true;
    fila.push_back(v);

    list<int>::iterator it;

    while(!fila.empty())
    {
        v = fila.front();
        cout<<v<<" ";
        fila.pop_front();


        for(it = adj[v].begin(); it!=adj[v].end(); ++it)
        {
            if(!visitados[*it])
            {
                visitados[*it] = true;
                fila.push_back(*it);
            }
        }
    }
}

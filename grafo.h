#ifndef GRAFO_H
#define GRAFO_H
#include <list>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Grafo
{
private:
    int V;
    list<int> * adj;
    int distancia[2056];
    int p[2056];

public:
    Grafo(int V);
    void adicionarAresta(int v1, int v2);
    int obterGrau(int v);

    bool existeVizinho(int v1, int v2);
    vector<int>listarVizinhos(int v);
    void dfs(int v);
    void bfs(int v);

};

#endif // GRAFO_H

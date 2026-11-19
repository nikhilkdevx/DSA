#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u = 0;u<V;u++){
            list<int>neighbours = l[u];
            for(int v : neighbours){
                cout << v << " ";
            }
            cout << endl;
        }
    }
}
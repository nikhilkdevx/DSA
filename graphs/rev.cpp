#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>>* l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<pair<int,int>> [V];
    }

    void addEdge(int u,int v,int w){
        l[u].push_back(make_pair(v,w));
        l[v].push_back(make_pair(u,w));
    }

    void print(){
        for(int u = 0;u<V;u++){
            list<int>neighbours = l[u];
            cout << u << ": ";
            for(int v : neighbours){
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph graph(6);
    graph.addEdge(1,2);
    graph.addEdge(0,1);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(1,5);
    graph.addEdge(0,3);
    graph.print();
    return 0;
}
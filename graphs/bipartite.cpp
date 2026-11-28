#include <iostream>
#include <vector>
#include <list>
#include<queue>
#include<string>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    bool isUndir;

    public:
    Graph(int V,bool isUndir=true){
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        if(isUndir){
            l[v].push_back(u);
        }
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

    bool isBipartite(){
        queue<int>q;
        vector<bool>vis(V,false);
        vector<int>color(V,-1);
        q.push(0);
        color[0] = 0;
        vis[0] = true;
        while(q.size() > 0){
            int curr = q.front();
            q.pop();
            list<int>neighbours = l[curr];

            for(int v : neighbours){
                if(!vis[v]){
                    vis[v] = true;
                    color[v] = !color[curr];
                    q.push(v);
                } else {
                    if(color[v] == color[curr]){
                        return false;
                    }
                }
            }
        }
        return true;

    }
};

int main(){
    // undirected , bipartite graph
    Graph graph(5);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(0,3);
    cout << graph.isBipartite()<< endl;
    return 0;
}

// If there is no cycle in the graph then it is bipartite. [ another method to find]
// If Cycle Exists , then if Cycle length is even then still it is bipartite but if odd then it will not biparptite.

// Now i need to find Cycle Length by my Own.
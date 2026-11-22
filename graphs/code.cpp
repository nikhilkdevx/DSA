// Building a Graph
#include <iostream>
#include <vector>
#include <list>
#include<queue>
using namespace std;

// By Adjacency List

// Graph having unweighted, undirected graph
class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u,int v){  // u---v
        l[u].push_back(v);
        l[v].push_back(u);
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

    // Graph Traversals

    // 1) Breadth First Search (BFS)

    void BFS(){ // O(V + E)
        queue<int> q;
        vector<bool>vis(V,false);
        q.push(0);
        vis[0] = true;

        while(q.size() > 0){
            int u = q.front();
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u];
            for(int v : neighbours){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }

    // 2) Depth First Search (DFS)
    void DFS(int u, vector<bool> &vis){
        vis[u] = true;
        cout << u << " ";

        list<int> neighbours = l[u];
        for(int v : neighbours){
            if(!vis[v]){
                DFS(v,vis);
            }
        }
    }



    // Has Path Problem
    // solve bfs with own
    bool pathHelper(int src,int dest,vector<bool> &vis){
        if(src == dest){
            return true;
        }

        vis[src]= true;
        list<int> neighbours = l[src];

        for(int v : neighbours ){
            if(!vis[v]){
                if(pathHelper(v,dest,vis)){
                    return true;
                }
            }
        }

        return false;
    }

    bool hasPath(int src, int dest){
        vector<bool> vis(V,false);
        return pathHelper(src,dest,vis);
    }
};
int main(){
   Graph graph(7);
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(4,5);
    // graph.addEdge(5,6);
    cout << graph.hasPath(5,6) << endl;
    return 0;  
}
 

// Building a Graph
#include <iostream>
#include <vector>
#include <list>
#include<queue>
#include<string>
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

    void BFSHelper(int node,vector<bool>&vis){ // O(V + E)
        queue<int> q;
        q.push(node);
        vis[node] = true;
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

    void bfs(){
        vector<bool>vis(V,false);
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                BFSHelper(i,vis);
                cout << endl;
            }
        }
    }

    // 2) Depth First Search (DFS)
    void DFSHelper(int u, vector<bool> &vis){
        vis[u] = true;
        cout << u << " ";

        list<int> neighbours = l[u];
        for(int v : neighbours){
            if(!vis[v]){
                DFSHelper(v,vis);
            }
        }
    }

    void dfs(){
        vector<bool>vis(V,false);
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                DFSHelper(i,vis);
                cout << endl;
            }
            
        }
        cout << endl;
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
   Graph graph(10);
    graph.addEdge(1,6);
    graph.addEdge(4,6);
    graph.addEdge(4,3);
    graph.addEdge(4,9);
    graph.addEdge(3,8);
    graph.addEdge(3,7);
    graph.addEdge(2,5);
    graph.addEdge(2,0);
    graph.bfs();
    return 0;  
}
 

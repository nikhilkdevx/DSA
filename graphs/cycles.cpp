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

    // Cycle in Undirected Graph
    // bool UndirCycleHelper(int src,vector<bool> &vis,int parent){
    //     vis[src] = true;
    //     list<int>neighbors = l[src];
    //     for(int v : neighbors){
    //         if(!vis[v]){
    //             if(UndirCycleHelper(v,vis,src)){
    //                 return true;
    //             } 
    //         } else {
    //             if(v != parent){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }

    // bool isCycleUndir(){
    //     vector<bool>vis(V,false);
    //     return UndirCycleHelper(0,vis,-1);
    // }

    //Cycle in Directed Graph

    bool dirCycleHelper(int src,vector<bool> &vis,vector<bool> &recPath){
        vis[src] = true;
        recPath[src] = true;
        list<int> neighbours = l[src];
        for(int v : neighbours){
            if(!vis[v]){
                if(dirCycleHelper(v,vis,recPath)){
                    return true;
                }
            } else {
                if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }

    bool isCycleDir(){
        vector<bool>vis(V,false);
        vector<bool> recPath(V,false);
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                if(dirCycleHelper(i,vis,recPath)){
                    return true;
                }
            }
        }
        return false;
    }
};

// We can say due to BackEdge Cycle Exists.

int main(){
    int V = 4;
    Graph graph(V,false);
    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    // graph.addEdge(3,0);
    cout << graph.isCycleDir() << endl;
    return 0;
}
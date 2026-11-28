#include <iostream>
#include <vector>
#include <list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    bool undir;
    public:
    Graph(int V,bool undir=true){
        this->V = V;
        l = new list<int> [V];
        this->undir = undir;
    }

    void addEdge(int u,int v){
        l[u].push_back(v); // u--->v
        if(undir){
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

    // Travsersals

    void bfs(){
        queue<int>q;
        vector<bool>vis(V,false);
        q.push(0);
        vis[0] = true;

        while(q.size() > 0){
            int u = q.front();
            q.pop();
            cout << u << " ";

            list<int>neighbours = l[u];
            for(int v : neighbours){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void dfsHelper(vector<bool> &vis,int u){
        vis[u] = true;
        cout << u << " ";

        list<int> neighbours = l[u];
        for(int v : neighbours){
            if(!vis[v]){
                dfsHelper(vis,v);
            }
        }
    }

    void dfs(int u){
        vector<bool>vis(V,false);
        dfsHelper(vis,u);
    }

    bool hasPathHelper(int src,int dest, vector<bool>&vis,queue<int> &q){
        // if(src == dest){
        //     return true;
        // }
        // vis[src] = true;
        // list<int>neighbours = l[src];
        // for(int v : neighbours){
        //     if(!vis[v]){
        //         if(hasPathHelper(v,dest,vis)){
        //             return true;
        //         };
                
        //     }
        // }

        // return false;

        if(src == dest){
            return true;
        }
        
        q.push(src);
        vis[src] = true;
        
        while(q.size() > 0){
            int u = q.front();
            q.pop();

            if(u == dest){
                return true;
            }
            
            list<int>neighbours = l[u];
            for(int v : neighbours){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                    
                }
            }

        }
        return false;


    }

    bool hasPath(int src ,int dest){
        vector<bool>vis(V,false);
        queue<int>q;
        return hasPathHelper(src,dest,vis,q);
    }

    bool cycleUndirHelper(int src,int parent,vector<bool> &vis){
        vis[src] = true;
        list<int>neighbours = l[src];
        for(int v : neighbours){
            if(!vis[v]){
                if(cycleUndirHelper(v,src,vis)){
                    return true;
                }
            } else {
                if(v != parent){
                    return true;
                }
            }
        }
        return false;
    }

    bool cycleUndir(){
        vector<bool> vis(V,false);
        return cycleUndirHelper(0,-1,vis);
    }

    bool cycleDirHelper(int src,vector<bool> &vis,vector<bool> &recPath){
        vis[src] = true;
        recPath[src] = true;
        list<int>neighbours = l[src];
        for(int v : neighbours){
            if(!vis[v]){
                if(cycleDirHelper(v,vis,recPath)){
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

    bool cycleDir(){
        vector<bool>vis(V,false);
        vector<bool>recPath(V,false);
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                if(cycleDirHelper(i,vis,recPath)){
                    return true;
                }
            }
        }
        return false;
  
    }

    bool isBiparptiteGraph(){ // Graph coloring Method
        vector<int>colors(V,-1);
        queue<int>q;
        q.push(0);
        colors[0] = 0;
        while(q.size() > 0) {
            int curr = q.front();
            q.pop();
            list<int>neighbours = l[curr];

            for(int v : neighbours){
                if(colors[v] == -1){
                    colors[v] = !colors[curr];
                    q.push(v);
                } else {
                    if(colors[curr] == colors[v]){
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool isBiparptite(){ // CycleMethod

    }
};

int main(){
    Graph graph(5);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    // graph.addEdge(0,3);
    cout << graph.isBiparptiteGraph() << endl;
    return 0;
}
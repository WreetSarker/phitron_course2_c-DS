#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> weightedGraph;
class Graph{
    int V;
    list<weightedGraph> * adj;
public:
    Graph(int V){
        this->V = V;
        this->adj = new list<weightedGraph>[V];
    }

    void addEdge(int u, int v, int w){
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u, w));
    }

    void printNeighbor(int chk){
        cout<<chk<<": ";
        for(auto it = adj[chk].begin(); it != adj[chk].end(); it++){
            cout<<"( "<<(*it).first<<", "<<(*it).second<<" )";
        }
        cout<<endl;
    }
    void BFS(int start){
        vector<bool> visited(this->V, false);
        queue<int> Q;
        string result = "";


        Q.push(start);
        visited[start] = true;
        result+=to_string(start);
        while(!Q.empty()){
            int u = Q.front();
            Q.pop();


            for(auto it = adj[u].begin(); it!=adj[u].end(); it++){
                int toVisit = (*it).first;
                if(!visited[toVisit]){
                    Q.push(toVisit);
                    visited[toVisit] = true;
                    result+=to_string(toVisit);
                }
            }
        }
        cout<<result<<endl;
    }

    void DFS(int start){
        static vector<bool> visited(this->V, false);

        visited[start] = true;
        cout<<start<<" ";


        for(auto it = adj[start].begin(); it!=adj[start].end(); it++){
                int toVisit = (*it).first;
                if(!visited[toVisit]){
//                    visited[toVisit] = true;
                    DFS(toVisit);
                }
            }

    }


};


int main(){
    int V, E;
    cin>>V>>E;

    Graph g(V);
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        g.addEdge(u, v, w);

    }
    for(int i = 0; i < V; i++){
        g.printNeighbor(i);
    }

    g.BFS(0);
    g.DFS(0);
    return 0;
}

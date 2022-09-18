#include<bits/stdc++.h>
using namespace std;


typedef pair<int, int> edgeWeightPair;

class Graph{
    int V;
    list<edgeWeightPair> *adjList;

public:
    Graph(int V){
        this->V = V;
        this->adjList = new list<edgeWeightPair>[V];
    }

    void addEdge(int u, int v, int w){
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }

    void printNeighbor(int chk){
        cout<<chk<<": ";
        for(auto it = adjList[chk].begin(); it != adjList[chk].end(); it++){
            cout<<"( "<<(*it).first<<", "<<(*it).second<<" )";
        }
        cout<<endl;
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


    return 0;
}

/*
Input:
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8
*/

/*
Output:
0: ( 1, 7 )( 2, 1 )( 5, 3 )
1: ( 0, 7 )( 3, 11 )
2: ( 0, 1 )( 3, 3 )( 5, 8 )
3: ( 1, 11 )( 2, 3 )( 6, 1 )
4: ( 6, 4 )( 5, 6 )
5: ( 0, 3 )( 6, 2 )( 4, 6 )( 2, 8 )
6: ( 3, 1 )( 5, 2 )( 4, 4 )
*/


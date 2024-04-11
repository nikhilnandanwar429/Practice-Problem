#include<bits/stdc++.h>
using namespace std;


//directed graph
//    ==> In degree
//    ==> out degree
//    ==>Weighted Directed Graph
//undirected graph
//      ==> degree
//    ==>Weighted Undirected Graph

template <typename T>

class graph{
    public:
    unordered_map<T , list<T>> adj;

    void addEdge(T u , T v , T direction){
        //direction = 0 -> undirected
        //direction = 1 -> directed Graph

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction == 0){
            adj[v].push_back(u);
        }

    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<< j << ", ";
            }
            cout<<endl;
        }
    }
};


int main(){

    int n;
    cout<<"Enter no of nodes ";
    cin>>n;

    int m;
    cout<<"Enter the no of edges ";
    cin>>m;

    graph<int> g;

    for(int i=0 ; i<m ; i++){
        int v , u;
        cin >> v >>u ;
        //creating undirected graph
        g.addEdge(v , u , 0);
    }

    //print Graph
    g.printAdjList();


}
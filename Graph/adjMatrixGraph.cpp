#include<iostream>
using namespace std;

int main(){

    
    int n,m;
    cout<<"Enter number of nodes and edges : ";
    cin>>n>>m;
    int adj[n+1][m+1] = {0};
    cout<<"Enter nodes connedted : "<<endl;
    for(int i=0 ; i<m ; i++){
        int v,u;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    

    
}
#include<bits/stdc++.h>
using namespace std;

bool detect(int src , vector<int> adj[] , int vis[]){
    vis[src] = 1;
    queue<pair<int , int> > q;
    q.push({src  , -1});
    while (!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto adjacentNode : adj[node]){
            if(!vis[adjacentNode]){
                vis[adjacentNode] = 1;
                q.push({adjacentNode , node});
            }
            else if(parent != adjacentNode){
                return true;
            }
        }

    }
    return false;

}

int main(){

}
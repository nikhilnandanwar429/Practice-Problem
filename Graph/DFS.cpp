#include <bits/stdc++.h>
using namespace std;

void dfs(int node , vector<int> adj[] , int visit[] , vector<int> &ls){
    visit[node] = 1;
    ls.push_back(node);
    for(auto i : adj[node]){
        if(!visit[i]){
            dfs(i , adj , visit , ls);
        }
    }

}

vector<int> dfsOfGraph(int n , vector<int> adj[]){
    int visit[n] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start , adj , visit , ls);
    return ls;
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    vector<int> adj[nodes + 1];

    for (int i = 0; i < edges; i++) {
        int v, u;
        cin >> v >> u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= nodes; i++) { // Corrected loop range
        cout << "Adjacency list of node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }


    vector<int> ans = dfsOfGraph(nodes ,adj );
    cout << "DFS list of node : ";
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;

    return 0;
}

// 8 8 0 1 1 2 1 3 3 4 4 8 8 7 7 3 2 6

#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int n , vector<int> adj[]){
    int visit[n] = {0};

    visit[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto i : adj[node])
        {
            if(!visit[i]){
                visit[i] = 1;
                q.push(i);
            }
        }
        
    }
    cout << "BFS list of node : ";
        for (int j = 0; j < bfs.size(); j++) {
            cout << bfs[j] << " ";
        }
        cout << endl;
    return bfs;

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

    vector<int> ans = bfsOfGraph(nodes, adj);
    cout << "BFS list of node : ";
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;

    // return 0;
}
// 9 9 1 2 0 6 2 3 2 4 6 7 6 9 4 5 5 8 8 7


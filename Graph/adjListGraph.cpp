#include <bits/stdc++.h>
using namespace std;

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

    return 0;
}

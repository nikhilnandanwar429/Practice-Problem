#include <bits/stdc++.h>
using namespace std;

// Works in only directed graph
// For nagative weight
// TO work on undirected
//  make directed to undirected
//  2 -> 3 (directed)
//  2 - 3 and 3 - 2 (Undirected)

/*  Function to implement Bellman Ford
 *   edges: vector of vectors which represents the graph
 *   S: source vertex to start traversing graph with
 *   V: number of vertices
 */
vector<int> bellman_ford(int v, vector<vector<int>> &edges, int s)
{
    vector<int> dist(v, 1e8);
    dist[s] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if (dist[u] != 1e8 && dist[u] + wt < dist[v])
            {
                dist[v] = dist[u] + wt;
            }
        }
    }
    // Nth revolution to check negative cycle
    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        if (dist[u] != 1e8 && dist[u] + wt < dist[v])
        {
            return {-1};
        }
    }
    return dist;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i)
        {
            vector<int> temp;
            for (int j = 0; j < 3; ++j)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        vector<int> res = bellman_ford(N, edges, src);

        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

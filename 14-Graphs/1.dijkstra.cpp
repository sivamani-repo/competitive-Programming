#include <bits/stdc++.h>
using namespace std;

pair<vector<int>, vector<int>> dijkstra(
    int v,
    const vector<vector<pair<int, int>>>& adj,
    int source
)
{
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    vector<int> dist(v, INT_MAX);
    vector<int> parent(v, -1);

    dist[source] = 0;
    parent[source] = source;

    pq.push({0, source});

    while (!pq.empty())
    {
        int currentDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (currentDist != dist[node])
            continue;

        for (auto edge : adj[node])
        {
            int nextNode = edge.first;
            int weight = edge.second;

            if (currentDist + weight < dist[nextNode])
            {
                dist[nextNode] = currentDist + weight;
                parent[nextNode] = node;

                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    return {dist, parent};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, e;

    cout << "Enter number of vertices: ";
    cin >> v;

    cout << "Enter number of edges: ";
    cin >> e;

    vector<vector<pair<int, int>>> adj(v);

    cout << "\nEnter edges (u v weight):\n";

    for (int i = 0; i < e; i++)
    {
        int u, x, w;
        cin >> u >> x >> w;

        if (u < 0 || u >= v || x < 0 || x >= v)
        {
            cout << "Invalid edge.\n";
            return 0;
        }

        adj[u].push_back({x, w});
        adj[x].push_back({u, w});
    }

    int start, destination;

    cout << "\nEnter start point: ";
    cin >> start;

    cout << "Enter destination: ";
    cin >> destination;

    if (start < 0 || start >= v ||
        destination < 0 || destination >= v)
    {
        cout << "Invalid start or destination.\n";
        return 0;
    }

    auto [dist, parent] = dijkstra(v, adj, start);

    if (dist[destination] == INT_MAX)
    {
        cout << "\nNo route exists.\n";
        return 0;
    }

    vector<int> path;

    for (int node = destination; node != start; node = parent[node])
        path.push_back(node);

    path.push_back(start);

    reverse(path.begin(), path.end());

    cout << "\nMinimum distance: " << dist[destination] << '\n';

    cout << "Route: ";

    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i];

        if (i + 1 < path.size())
            cout << " -> ";
    }

    cout << '\n';

    return 0;
}
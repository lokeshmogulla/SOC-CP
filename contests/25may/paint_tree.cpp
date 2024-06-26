#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

pair<int, vector<int>> bfs_max_distance(int start, int n, const vector<vector<int>>& adj) {
    vector<int> distance(n + 1, -1);
    queue<int> q;
    q.push(start);
    distance[start] = 0;
    int farthest_node = start;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);
                if (distance[neighbor] > distance[farthest_node]) {
                    farthest_node = neighbor;
                }
            }
        }
    }

    return {farthest_node, distance};
}

void solve(int t, const vector<tuple<int, pair<int, int>, vector<pair<int, int>>>>& test_cases) {
    for (const auto& [n, ab, edges] : test_cases) {
        int a = ab.first;
        int b = ab.second;
        
        vector<vector<int>> adj(n + 1);
        for (const auto& [x, y] : edges) {
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        // Find the diameter of the tree
        auto [farthest_node_from_1, distance_from_1] = bfs_max_distance(1, n, adj);
        auto [other_end, distance_from_farthest] = bfs_max_distance(farthest_node_from_1, n, adj);
        int diameter = distance_from_farthest[other_end];

        // Find the maximum distance from a and b
        auto [unused_a, dist_from_a] = bfs_max_distance(a, n, adj);
        auto [unused_b, dist_from_b] = bfs_max_distance(b, n, adj);

        int max_distance = max(dist_from_a[b], diameter);

        cout << max_distance << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<tuple<int, pair<int, int>, vector<pair<int, int>>>> test_cases(t);
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int a, b;
        cin >> a >> b;

        vector<pair<int, int>> edges(n - 1);
        for (int j = 0; j < n - 1; ++j) {
            cin >> edges[j].first >> edges[j].second;
        }

        test_cases[i] = {n, {a, b}, edges};
    }

    solve(t, test_cases);

    return 0;
}

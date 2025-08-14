#include <bits/stdc++.h>
#include <vector>
std::vector<int> adj[150];
std::vector<bool> visited(150, false);
std::vector<int> toporder;
void dfs(int node) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
    toporder.push_back(node);
}
int main() {
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    std::reverse(toporder.begin(), toporder.end());
    
    for (int node : toporder) {
        std::cout << node << " ";
    }
    std::cout << std::endl;

    return 0;
}

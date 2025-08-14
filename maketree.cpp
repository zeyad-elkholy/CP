#include <bits/stdc++.h>
int student, k;
std::vector<int> adj[100010];
std::vector<bool> seen(100010, 0);
std::vector<int> topological_order;
std::vector<int> result(100010, 0);

void dfs(int u) {
    seen[u] = 1;
    for (int v : adj[u]) {
        if (!seen[v]) {
            dfs(v);
        }
    }
    topological_order.push_back(u);
}

int main () {
    std::cin >> student >> k;
    for (int i = 1; i <= k; i++) {
        int w;
        std::cin >> w;
        for (int j = 0; j < w; j++) {
            int v;
            std::cin >> v;
            adj[i].push_back(v);  // i is successful, wants to be superior to v
        }
    }

    for (int i = 1; i <= student; i++) {
        if (!seen[i]) {
            dfs(i);
        }
    }

    int p = 0;
    for (int i = student - 1; i >= 0; i--) {
        int u = topological_order[i];
        result[u] = p;
        p = u;
    }

    for (int i = 1; i <= student; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

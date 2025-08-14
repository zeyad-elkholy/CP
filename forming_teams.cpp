#include <bits/stdc++.h>
std::vector<int> adj[105];
std::vector<int> colored(105, -1);
std::vector<bool> seen(105, 0);
int ans=0;
int n, m;
bool notzero =true;
void dfs(int v, int color){
  colored[v] = color;
  seen[v] = true;
  for(int u : adj[v]){
    if (!seen[u]) {
      dfs(u, color^1);
    }else if (colored[u]== colored[v]) {
      notzero = false;
    }
  }
  
}
void solve(){
  std::cin >> n >> m;
  int whatever;
  int anotherwhatever;
  for (int i =0; i<m; ++i){
    std::cin >> whatever >> anotherwhatever;
    adj[whatever].push_back(anotherwhatever);
    adj[anotherwhatever].push_back(whatever);
  }

  for (int u = 1; u <= n; ++u) {
        if (!seen[u]) {
          notzero=true;
          dfs(u, 0);
          if (!notzero) {
            ans++;
          
          }
        }
  }

  if ((n - ans) % 2 != 0) ans++;
  std::cout << ans;
  
}
int main (int argc, char *argv[]) {
  solve();

  return 0;
}

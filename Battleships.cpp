#include <bits/stdc++.h>
#include <iostream>
int n;
char grid[100][100];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool seen[100][100];
bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int ans = 0;
void dfs(int x, int y){
  if (!valid(x, y) || seen[x][y]) return;
  
  seen[x][y] =true;
  for (int i =0; i<4; ++i) {
    int nx=x+ dx[i];
    int ny=y+dy[i];
    if (grid[nx][ny]=='x') {
      dfs(nx, ny);
    }
  }

}
int main(){
  int t;
  int Case=1;
  std::cin >>t;
  while (t--) {
    ans=0;
    std::cin>>n;
    for (int i =0; i<n ; ++i) {
      for (int j=0; j<n; ++j) {
        std::cin >>grid[i][j];
      }
    }
    for (int i =0; i<n ; ++i) {
      for (int j=0; j<n; ++j) {
        if (!seen[i][j]&&grid[i][j] == 'x') {
          dfs(i, j);
          ans++;
        
        }
      }
    }
    std::cout << "Case " << Case++ << ": " << ans <<"\n";

  
  }
}

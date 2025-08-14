#include <iostream>
#include <string>
#include <vector>
int n, m;
char grid[8][8];
char pattern[8] = {'I', 'E', 'H', 'O', 'V', 'A','#', '\0'};
int x;
std::vector<std::string> res;

void marcus() {
  int y = n - 1;
  for (int i = 0; i < m; i++) {
    if (grid[y][i] == '@') x = i;
  }

  for (char c : pattern) {
    if (y-1 >= 0 && grid[y-1][x] == c) {
      res.push_back("forth");
      y--;
    } else if (x+1 < m && grid[y][x+1] == c) {
      res.push_back("right");
      x++;
    } else if (x-1 >= 0 && grid[y][x-1] == c) {
      res.push_back("left");
      x--;
    }
  }
}

int main() {
  int T;
  std::cin >> T;
  while (T--) {
    res.clear();
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j)
        std::cin >> grid[i][j];
    marcus();
    std::cout << res[0] ;
    for (int i = 1; i < res.size(); ++i) {
      std::cout <<" " << res[i] ;
    }
    std::cout << std::endl;
  }
  return 0;
}

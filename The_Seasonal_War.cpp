#include <iostream>
#include <cstring> // for memset

char grid[26][26];
bool visited[26][26];
int n;
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

void solve(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (valid(nx, ny) && grid[nx][ny] == '1' && !visited[nx][ny]) {
            solve(nx, ny);
        }
    }
}

int main() {
    int imageNum = 1;
    while (std::cin >> n) {
        memset(visited, false, sizeof(visited));

        // Read grid
        for (int i = 0; i < n; ++i) {
            std::cin >> grid[i];
        }

        int ans = 0;
        // Find and count war eagles
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    solve(i, j);
                    ans++;
                }
            }
        }

        std::cout << "Image number " << imageNum
                  << " contains " << ans << " war eagles." << std::endl;
        imageNum++;
    }
    return 0;
}

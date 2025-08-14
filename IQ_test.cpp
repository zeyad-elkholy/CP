#include <iostream>
char inp[4][4];
bool test(int x, int y) {
    if (x +1 == 4 || y+1 ==4) return false;
    return (inp[x][y] == inp[x][y + 1] && inp[x][y] == inp[x + 1][y] && inp[x][y] == inp[x + 1][y + 1]);
}
bool test() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (test(i, j)) return true;
        }
    }
    return false;
}
int main (int argc, char *argv[]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      std::cin >> inp[i][j];
    }
  }
  bool yes = test();
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      char og = inp[i][j];
      if (inp[i][j] == '#') {
        inp[i][j] = '.';
      }else {
        inp[i][j] = '#';
      }
      if (test()) {
        yes = true;
      }
      inp[i][j] = og;
    }
  }
  if (yes) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}

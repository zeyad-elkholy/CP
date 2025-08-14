#include <cctype>
#include <iostream>
#include <algorithm>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  if (n < 26) {
    std::cout << "NO" << std::endl;
    return 0;
  }
  std::string s;
  std::cin >> s;
  std::transform(s.begin(), s.end(), s.begin(), ::tolower);
  bool letter[26];
  for (int i = 0; i<n; ++i) {
    letter[s[i] - 'a'] = true;
  
  }
  int ans = 0;
  for (bool x :letter ) {
    ans += x;

  
  }
  if (ans == 26) {
    std::cout << "YES";
  
  }else {
  std::cout << "NO";
  }

  return 0;
}

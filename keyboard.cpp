#include <iostream>
#include <string>
#include <unordered_map>
int main (int argc, char *argv[]) {
  char d;
  std::cin >> d;
  std::string s;
  std::cin >>s;
  std::unordered_map<int, char> keys;
  std::string Keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
  for (int i = 0; i < s.size(); ++i) {
    if (d == 'L')
     s[i] = Keys[Keys.find(s[i]) +1];
    else 
       s[i] = Keys[Keys.find(s[i]) -1];
  }
 std::cout << s;
  return 0;
}

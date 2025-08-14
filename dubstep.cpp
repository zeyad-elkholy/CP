#include <bits/stdc++.h>
#include <iostream>
#include <string>
std::string s;
std::string answer; 
void solve(){
  std::cin >> s;

 for (size_t i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 3;
            if (!answer.empty() && answer.back() != ' ')
                answer += ' ';
        } else {
            answer += s[i];
            i++;
        }
    }

  std::cout << answer;
}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}


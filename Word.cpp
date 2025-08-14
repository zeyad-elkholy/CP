#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
int main (int argc, char *argv[]) {
  std::string s;
  std::cin >> s;
  int cap=0, sm=0;
  int length = s.size();
  std::string s2 (length, ' ');
  for (int i = 0; i < length; i++) {
    if (islower(s[i])) {
      sm++;
    }else if(isupper(s[i])){
      cap++;
    }
  }
  if (cap > sm) {

    for (int i = 0; i < length; i++) {
     s2[i] = toupper(s[i]);
    } 
  }else{

    for (int i = 0; i < length; i++) {
     s2[i] = tolower(s[i]);
    } 
    
    
  }
  std::cout << s2;

  return 0;
}

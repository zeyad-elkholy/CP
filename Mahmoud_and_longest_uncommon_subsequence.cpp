#include <algorithm>
#include <iostream>
#include <string>
int longnestUncommonSubsequence(std::string a, std::string b) {
    if (a == b) return -1; // If both strings are the same, return -1
    else return std::max(a.length(), b.length()); // If lengths differ, return the longer one
    // read the fucking problem statement    
    // int l = a.length();
    //
    // int c=0;
    // for (int i=0; i <l; ++i) {
    //   if (a[i] == b[i]) {
    //     continue;
    //   }else {
    //    c++;
    //   }
    //
    
}
int main (int argc, char *argv[]) {
  std::string a, b;
  std::cin >> a >>b;
  std::cout << longnestUncommonSubsequence(a, b);
  return 0;
}

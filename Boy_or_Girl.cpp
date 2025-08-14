#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  std::string arr;
  std::cin >> arr;
  int n = arr.length();
  bool counted[n] = {false};
  int count =0;
  for (int i =0; i <= n; i++){
    if (counted[i]){
      continue;
    }
    for (int x =i+1 ; x<=n; x++){
      if (arr[i]  == arr[x]){
        count++;
        counted[x] = true;

      }
    }
  }
  int fs = 0;
  for (int i = 0; i < n; i++) {
    fs += counted[i];
    
  }
  int t = n - fs;
  if (t%2 == 0){
    std::cout << "CHAT WITH HER!";

  }else if (t%2 != 0){
    std::cout << "IGNORE HIM!";
  }
  return 0;
}

#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
int main (int argc, char *argv[]) {
  int n, val;
  std::cin>> n;
  std::vector <int> arr;
  std::vector <int>t1;
  std::vector <int>t2;
  std::vector <int>t3;
  for (int i = 0; i < n; i++) {
    std::cin >> val;
    arr.push_back(val);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      t1.push_back(i);
      
    }else if (arr[i] == 2) {
      t2.push_back(i);
      
    }else if (arr[i] == 3) {
      t3.push_back(i);
      
    }
    
  }
  int teams = std::min(std::min(t1.size(),t2.size()),t3.size()  );
  std::cout<< teams << std::endl;
  for (int i = 0; i < teams; i++) {
    std::cout << t1 [i] +1 << " " << t2[i] +1 << " " << t3[i] +1 << std::endl;
    
  }
  
  return 0;
}

#include <climits>
#include <iostream>
#include <string>
#include <vector>
std::vector<long long > nums;
int n;
std::string dir;
std::vector<long long > left;
std::vector<long long > right;
long long s = LLONG_MAX;
int Index = 0;
int main (int argc, char *argv[]) {
  std::cin>> n;
  nums.resize(n);
  std::cin >> dir;
  for (int i = 0; i < n; i++) {
    std::cin >> nums[i];
  }
  for (int i = 0; i < n-1; i++) {
    if(dir[i] == 'R' && dir[i+1] == 'L') {
      long long time = (nums[i+1] - nums[i]) / 2;
      if(time <s){
        s = time;
      }
    }
  }
  if(s == LLONG_MAX) {
    std::cout << -1 << std::endl;
    return 0;
  }else {
    std::cout << s << std::endl;
  }
  return 0;
}

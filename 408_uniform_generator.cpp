#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
int main (int argc, char *argv[]) {
  int mod, step;
  std::cin>> step >> mod;
  std::vector<int> arr;
  int seed=0;
  for (int i = 0; i < mod; i++) {
      arr.push_back(seed);
      seed = (seed+step)%mod;

  }
  for (int i = 0; i < mod ; i++) {
    if ( std::find(arr.begin(), arr.end(), i) != arr.end() ){
      continue;
    }
    else{
      std::cout << std::setw(10) << step << std::setw(10) << mod<< "    Bad Choice\n\n";
      return 0;
    }
    
  }
      std::cout << std::setw(10) << step << std::setw(10) << mod<< "    Good Choice\n\n";

  return 0;
}

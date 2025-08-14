#include <iostream>
#include <string>
bool dir= false;
std::string left, right, first, second;

int main (int argc, char *argv[]) {
  std::cin >> first;
  std::cin >> second;
  for (int i = 0; i < first.size(); ++i) {
    if (first[i] == '|') {
      dir = true;
      continue;
    }
    if (dir) {
      right += first[i];
    }else {
      left += first[i];
    }
  }
  for (int i = 0; i < second.size(); ++i) {
    if(left.size() < right.size()) {
      left += second[i];
    }else {
      right += second[i];
    }
  }
  if (left.size() == right.size()) {
    std::cout << left << "|" << right << std::endl;
  } else {
    std::cout << "Impossible" << std::endl;
  
  }
  
  
  
  return 0;
}

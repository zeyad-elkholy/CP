#include <bits/stdc++.h>
#include <iostream>
#include <vector>
int x,y;
int xu,xd,yu,yd;
int x1, x2, Y1, y2;
char fuck;
class shape{
    public:
    int x1, y1, x2, y2;
    shape(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
};
bool isinside(shape s, int x, int y){
  return (x > s.x1 && x<s.x2 && 
      y > s.y1 && y<s.y2 );
}
std::vector<shape> shapes;
void solve(){
  while (true) {
    std::cin >>fuck >>  x1 >>  Y1 >> x2 >> y2;
    xu = std::min(x1, x2);
    xd = std::max(x1, x2);
    yu = std::min(Y1, y2);
    yd = std::max(Y1, y2);
    shapes.emplace_back(xu, yu, xd, yd);
  }
  for (auto s:shapes) {
    if (isinside(s, x, y)) {
    
    }
  
  }
}



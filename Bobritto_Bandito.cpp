#include "iostream"
int main (int argc, char *argv[]) {
  int t;
  int n,m,l,r;
  std::cin >> t;
  for (int i =0; i <t; i++) {
    std::cin >> n >> m >> l >> r;
    int ll ,rr = ll =0;
    for (int x=0; x <m;x++ ) {
      if (ll > l) {
        ll--;
      
      }else if(rr <r ){
        rr++;
      }

    
    }
    std::cout << ll <<" " << rr << std::endl;

  
  }

  return 0;
}

#include <iostream>
#include <map>
#include <ostream>
#include <vector>
int main (int argc, char *argv[]) {
  int n;
  std::cin >>n;
  int day = n;
  std::vector<int> N(n);
  for (int i=0 ; i<n; ++i ) std::cin >> N[i];
  std::map<int , int> missed;
  for (int i=0 ; i<n; ++i ) {
    if (N[i]==day) {
      std::cout << day<< " ";
      day--;
      while (missed.count(day)){
        std::cout << day << " ";
        missed.erase(day);
        day--;
      
      }
      std::cout << std::endl;
    }else {
      std::cout <<"\n" ;
      missed[N[i]]= N[i];

    }
  }
  // count return the number of the element found in this map
  // for (std::pair<int,int> x : missed) {
  //   std::cout << x.first << " ";
  // }

  return 0;
}
// #include<iostream>
// using namespace std;
// int t,n,a[100001],x;
// int main(){
//   cin>>n;
//   for(;n;){cin>>x;
//     a[x]=1;
//     while(a[n])cout<<n--<<' ';
//     cout<<"\n";
//   }
// }
//
//
//

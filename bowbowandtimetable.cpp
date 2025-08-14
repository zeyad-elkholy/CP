#include <bits/stdc++.h>
using namespace std;
string a;
int main (int argc, char *argv[]) {
  cin >> a;
  long long count1 = 0, fst1=-1;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '1') {
      if (fst1 == -1) fst1 = i;
      count1++;
    }
  }
  if (count1 == 0) {
    cout << "0\n";
    return 0;
  }
  fst1 = a.size() - fst1 - 1;
  if(fst1%2 ==1)
    fst1++, count1= 0;
  fst1 /= 2;
  if(count1 >1)
    fst1++;
  cout << fst1 << "\n";
  return 0;
}

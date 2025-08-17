#include <bits/stdc++.h>
using namespace std;
# define int long long
int sum_of_digits(string n) {
    int sum = 0;
    for (char c : n) {

        if (isdigit(c)) {
            sum += c - '0';  
        }
    }
    return sum;
}
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int countDigits(int n) {
  string str = to_string(n);
  return str.size();
}
int32_t main() {
    string n;
    cin >> n;
    if(n.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    int sum = sum_of_digits(n);
    int count = 1;
    while (countDigits(sum) > 1) {
        sum = sum_of_digits(sum);
        count++;
    }
    cout << count << endl;

    return 0;
}

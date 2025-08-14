 #include <iostream>
 int main (int argc, char *argv[]) {
   int n,a,b;
   long long some_sums = 0;
   std::cin >> n >> a >> b;
   for (int i = 1; i <= n; ++i) {
     int sum = 0;
     int x = i;
     while (x > 0) {
       sum += x % 10;
       x /= 10;
     }
     if (sum >= a && sum <= b) {
       some_sums += i;
     }
   }
   std::cout << some_sums << std::endl;
   return 0;
 }

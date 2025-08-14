#include <algorithm>
#include <iostream>
int arr[1010];
int n; 
int flow(int x) {
    int ans = 1;

    int floorR = arr[x];
    for (int i = x + 1; i < n; i++) {
        if (arr[i] <= floorR) {
            ans++;
            floorR = arr[i];
            // std::cout << x << " i: " << i << " floorR: " << floorR << " ans " << ans << std::endl;
        }else break;
    }

    int floorL = arr[x];
    for (int i = x - 1; i >= 0; i--) {
        if (arr[i] <= floorL) {
            ans++;
            floorL = arr[i];
            // std::cout << x << " i: " << i << " floorL: " << floorL << " ans " << ans << std::endl;
        }else break;
    }

    return ans;
}
int main (int argc, char *argv[]) {
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  long long max = flow(0);
  for (int i = 1; i < n; i++) {
    long long tmp = flow(i);
    max = std::max(max, tmp);
  }
  std::cout << max << std::endl;
  return 0;
}

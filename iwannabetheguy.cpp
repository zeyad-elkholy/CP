#include <bits/stdc++.h>
#include <iostream>
std::set<int> s;
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < 2; ++i) {
        int x;
        std::cin >> x;
        for (int j = 0; j < x; ++j) {
            int y;
            std::cin >> y;
            s.insert(y);
        }

    }
    for (int i = 1; i <= n; ++i) {
        if (s.find(i) == s.end()) {
            std::cout << "Oh, my keyboard!" << std::endl;
            return 0;
        }
    }
    std::cout << "I become the guy." << std::endl;

    return 0;
}

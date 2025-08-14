#include <iostream>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--; // Convert to 0-based index

        // Birds moving up (to x-1)
        if (x - 1 >= 0) {
            arr[x - 1] += (y - 1);
        }

        // Birds moving down (to x+1)
        if (x + 1 < n) {
            arr[x + 1] += (arr[x] - y);
        }

        // Remove all birds from the current wire
        arr[x] = 0;
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

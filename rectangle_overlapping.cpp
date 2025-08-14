#include <bits/stdc++.h>
int t;

struct rectangle {
    int x1, y1, x2, y2; // Coordinates of the rectangle (x1, y1) is bottom-left and (x2, y2) is top-right
};
bool isOverlapping(const rectangle& r1, const rectangle& r2) {
    // Check if one rectangle is to the left of the other
    if (r1.x2 <= r2.x1 || r2.x2 <= r1.x1) {
        return false;
    }
    // Check if one rectangle is above the other
    if (r1.y2 <= r2.y1 || r2.y2 <= r1.y1) {
        return false;
    }
    // If neither condition is true, the rectangles overlap
    return true;
}
rectangle overlapping_rectangle(const rectangle& r1, const rectangle& r2){
    rectangle overlap;
    overlap.x1 = std::max(r1.x1, r2.x1);
    overlap.y1 = std::max(r1.y1, r2.y1);
    overlap.x2 = std::min(r1.x2, r2.x2);
    overlap.y2 = std::min(r1.y2, r2.y2);
    return overlap;

}
void solve() {
    std::cin >> t;
    while (t--) {
        rectangle r1, r2;
        std::cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
        std::cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;
        if (isOverlapping(r1, r2)) {
            rectangle overlap = overlapping_rectangle(r1, r2);
            std::cout <<overlap.x1 << " "<<overlap.y1 <<  " " << overlap.x2 << " "<< overlap.y2 ;
        } else {
            std::cout << "No Overlap\n";
        }
    }
}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}


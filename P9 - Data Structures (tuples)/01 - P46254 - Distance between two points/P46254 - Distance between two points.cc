#include <iostream>
#include <cmath>
using namespace std;

struct Point {
         double x, y;
};

double dist(const Point& a, const Point& b) {
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

int main() {
    Point a;
    cin >> a.x >> a.y;
    
    Point b;
    cin >> b.x >> b.y;
    
    cout << dist(a, b) << endl;
}

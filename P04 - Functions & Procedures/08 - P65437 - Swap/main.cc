#include <iostream>
using namespace std;


void swap2(int& a, int& b);


int main() {
    int x,y;
    while (cin >> x >> y) {
        swap2(x, y);
        cout << x << " " << y << endl;
    }
}

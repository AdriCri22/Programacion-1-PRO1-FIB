#include <iostream>
using namespace std;

int max2(int x, int y) {
    if (x < y) return y;
    else return x;
}

int min2(int x, int y) {
    if (x < y) return x;
    else return y;
}

int sum_min_max(int x, int y, int z) {
    int max = max2(max2(x, y), max2(x, z));
    int min = min2(min2(x, y), min2(x, z));
    
    return max + min;
}


int main() {
    int x, y, z;
    while (cin >> x >> y >> z) {
        cout << sum_min_max(x, y, z) << endl;
    }   
    
}

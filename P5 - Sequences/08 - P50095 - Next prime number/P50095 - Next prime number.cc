#include <iostream>
using namespace std;

bool prime(int m) {
    // Pre: m > 0
    bool found = false;
    if (m == 1) return false;
    if (m == 2) return true;
    if (m % 2 == 0) return false;
    for (int k = 3; not found and k * k <= m; k += 2) {
        if (m % k == 0) found = true;
    }
    return not found;
}

int main() {
    int n;
    
    while (cin >> n and prime(n)) {
        n++;
        while (not prime(n)) {
            n++;
        }
        cout << n << endl;
    }
}

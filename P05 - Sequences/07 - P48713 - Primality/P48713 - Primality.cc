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
    int n, m;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (prime(m)) cout << m << " is prime" << endl;
        else cout << m << " is not prime" << endl;
    }
}

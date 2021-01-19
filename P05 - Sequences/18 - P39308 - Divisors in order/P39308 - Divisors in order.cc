#include <iostream>
#include <cmath>
using namespace std;


void divisors(int a) {
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) cout << " " << i;
    }
    for (int k = sqrt(a); 0 < k; k--) {
        if (a % k == 0 and k != a / k) cout << " " << a / k;
    }
}

int main() {
    int n;
    
    while (cin >> n) {
        cout << "divisors of " << n << ":";
        divisors(n);
        cout << endl;
    }
}

#include <iostream>
#include <vector>
using namespace std;

bool prime(int n) {
    if (n == 1 or n == 0) return false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
    }
    return true;
}

int main() {    
    int n;
    while (cin >> n) {
        if (prime(n)) cout << n << " is prime" << endl;
        else cout << n << " is not prime" << endl;
    }
}

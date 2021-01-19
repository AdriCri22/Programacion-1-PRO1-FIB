#include <iostream>
#include <vector>
using namespace std;

struct Rational {
    int num, den;
};

Rational rational(int n, int d) {
    Rational r;
    if (n == 0) {
        r.den = 1;
        r.num = 0;
    } else {
        bool positive;
        if (0 < n * d) {
            if (n < 0) {
                n *= -1;
                d *= -1;
            }
            positive = true;
        } else {
            if (d < 0) d *= -1;
            else n *= -1;
            positive = false;
        }
        int k;
        
        if (n < d) k = n;
        else k = d;
        
        for (int i = k; 2 <= i; i--) {
            if (n % i == 0 and d % i == 0) {
                n /= i;
                d /= i;
            }
        }
        if (positive) r.num = n;
        else r.num = n * -1;
        r.den = d;
    }
    return r;
}

int main() {
    int n, d;
    cin >> n >> d;
    Rational r = rational(n, d);
    cout << r.num << "/" << r.den << endl;
}

#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n == 0) {
        maxim = 0;
        minim = 0;
    } else {
        digit_maxim_i_minim(n / 10, maxim, minim);
        if (maxim == 0 and minim == 0) {
            maxim = n % 10;
            minim = n % 10;
        } else {
            if (n % 10 < minim) minim = n % 10;
            else if (maxim < n % 10) maxim = n % 10;
        }
    }
}


int main() {
    int x;
    while (cin >> x) {
      int a, b;
      digit_maxim_i_minim(x, a, b);
      cout << x << ' ' << a << ' ' << b << endl;
    }
}

#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim);


int main() {
    int x;
    while (cin >> x) {
      int a, b;
      digit_maxim_i_minim(x, a, b);
      cout << x << ' ' << a << ' ' << b << endl;
    }
}


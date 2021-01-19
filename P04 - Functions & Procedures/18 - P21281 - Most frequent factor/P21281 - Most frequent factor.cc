#include <iostream>
using namespace std;


void factor(int n, int& f, int& q) {
    q = 0;
    for (int i = 2; i * i <= n; i++) {
        for (int k = 1; n % i == 0; k++) {
            n = n / i;
            if (q < k) {
                q = k;
                f = i;
            }
        }
    }
    if (q == 0) {
        q = 1;
        f = n;
    }
}


int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
}

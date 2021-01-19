#include <iostream>
using namespace std;


void factor(int n, int& f, int& q);


int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
}

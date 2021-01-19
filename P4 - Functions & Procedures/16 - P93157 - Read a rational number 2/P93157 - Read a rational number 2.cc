#include <iostream>
using namespace std;

int mcd (int num, int den) {
    int res;
    while (den != 0) {
        res = den;
        den = num % den;
        num = res;
    }
    return num;
}

bool read_rational(int& num, int& den) {
    char c;
    while (cin >> num >> c >> den) {
        int MCD = mcd(num, den);
        num /= MCD;
        den /= MCD;
        return true;
    }
    return false;
}


int main() {
  int num, den;
  while (read_rational(num, den)) cout << num << ' ' << den << endl;
}

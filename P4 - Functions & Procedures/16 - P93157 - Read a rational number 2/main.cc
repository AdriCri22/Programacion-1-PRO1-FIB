#include <iostream>
using namespace std;


bool read_rational(int& num, int& den);


int main() {
  int num, den;
  while (read_rational(num, den)) cout << num << ' ' << den << endl;
}

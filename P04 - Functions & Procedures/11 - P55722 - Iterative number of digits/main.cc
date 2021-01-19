#include <iostream>
using namespace std;


int number_of_digits(int n);


int main() {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
}

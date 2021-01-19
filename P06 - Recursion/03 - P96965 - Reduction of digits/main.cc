#include <iostream>
using namespace std;


int reduction_of_digits(int n);


int main() {
  int n;
  while (cin >> n) {
    cout << reduction_of_digits(n) << endl;
  }
}

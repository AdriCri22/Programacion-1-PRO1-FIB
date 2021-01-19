#include <iostream>
using namespace std;

bool is_perfect(int x);

int main () {
  int x;
  while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}

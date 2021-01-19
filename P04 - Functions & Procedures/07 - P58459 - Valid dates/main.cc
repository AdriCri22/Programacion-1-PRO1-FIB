#include <iostream>
using namespace std;


bool is_valid_date(int d, int m, int a);


int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
}

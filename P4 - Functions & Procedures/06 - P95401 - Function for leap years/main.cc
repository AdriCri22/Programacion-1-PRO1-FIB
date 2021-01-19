#include <iostream>
using namespace std;


bool is_leap_year(int year);


int main() {
    int a;
    while (cin >> a) cout << (is_leap_year(a) ? "true" : "false") << endl;
}

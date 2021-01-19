#include <iostream>
using namespace std;


bool is_increasing(int n);


int main() {
    int n;
    while (cin >> n) cout << (is_increasing(n) ? "true" : "false") << endl;
}

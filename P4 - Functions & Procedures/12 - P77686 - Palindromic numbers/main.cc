#include <iostream>
using namespace std;


bool is_palindromic(int n);


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}

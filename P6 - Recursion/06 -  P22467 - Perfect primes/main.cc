#include <iostream>
using namespace std;


bool is_perfect_prime(int n);


int main() {
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}

#include <iostream>
using namespace std;


void decompose(int n, int& h, int& m, int& s);


int main() {
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}

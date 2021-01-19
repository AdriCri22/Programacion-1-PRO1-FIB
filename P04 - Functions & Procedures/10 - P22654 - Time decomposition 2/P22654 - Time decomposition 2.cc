#include <iostream>
using namespace std;


void decompose(int n, int& h, int& m, int& s) {
    h = n / 3600;
    m = n / 60 - h * 60;
    s = n - m * 60 - h * 3600;
}

int main() {
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}

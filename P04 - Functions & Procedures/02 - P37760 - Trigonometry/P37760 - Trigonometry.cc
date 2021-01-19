#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cout.setf(ios::fixed);
    cout.precision(6);
    
    while (cin >> n) {
        double x = n * M_PI / 180;
        cout << sin(x) << " " << cos(x) << endl;
    }
}

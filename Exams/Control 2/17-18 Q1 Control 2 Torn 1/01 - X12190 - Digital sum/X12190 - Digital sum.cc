#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        if (0 <= a and 0 <= b) {
            int div = 1, sum = 0;
            while (a != 0 or b != 0) {
                sum += (((a % 10) + (b % 10)) % 10) * div;
                a = a / 10;
                b = b / 10;
                div = div * 10;
            }
            cout << sum << endl;
        }
    }
}

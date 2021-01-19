#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        int count = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                count++;
                n = n / 2;
            } else {
                count++;
                n = (3 * n) + 1;
            }
        }
        cout << count << "\n";
    }
}

#include <iostream>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n;
    
    if (0 < n) {
        while (cin >> m) {
            if (m % n == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
}

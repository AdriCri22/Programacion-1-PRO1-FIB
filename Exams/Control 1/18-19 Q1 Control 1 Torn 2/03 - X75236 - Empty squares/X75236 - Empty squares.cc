#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    
    cin >> n >> c;
    
    if (0 < n) {
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= i; k++) {
                for (int r = 1; r <= i; r++) {
                    if (k == 1 or k == i) cout << c;
                    if (k != 1 and k != i and r == 1 or k != 1 and k != i and r == i) cout << c;
                    if (r != 1 and r != i and k != 1 and k != i) cout << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}

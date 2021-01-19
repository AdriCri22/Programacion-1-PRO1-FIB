#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    
    cin >> n >> c;
    
    if (0 < n and n % 2 != 0) {
        for (int i = n; 0 <= i; i -= 2) {
            for (int m = n - 1; 0 <= (m - i); m--) {
                cout << " ";
            }
            for (int k = i; 1 <= k; k--){
                if (k == 1) cout << c;
                if (k != 1) cout << c << ".";
            }
            cout << endl;
        }
    }
}

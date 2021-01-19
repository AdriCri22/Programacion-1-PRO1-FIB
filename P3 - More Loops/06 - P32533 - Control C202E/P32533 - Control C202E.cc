#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    if (1 <= n) {
        for (int i = 1; i <= n; i++) {
            int count_1 = 0, count_2 = 0;
            
            while (count_1 < (n - i)) {
                count_1++;
                cout << "+";
            }
            
            cout << "/";
            
            while (count_2 < (i - 1)) {
                count_2++;
                cout << "*";
            }
            cout << "\n";
        }
    }
}

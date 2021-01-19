#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;    
    for (int i = 1; i <= n; i++) {
        int count = 0;
        while (count < i) {
            count++;
            cout << "*";
        }
        cout << "\n";
    }
}

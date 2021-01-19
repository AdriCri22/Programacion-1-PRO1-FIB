#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i < n; i++) {
        cout << n << " x " << i << " = " << n*i << "\n";
    }
    
    if (n > 0) {
        cout << n << " x " << n << " = " << n*n << endl;
    }
}

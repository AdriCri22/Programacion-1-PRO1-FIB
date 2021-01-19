#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (100 <= n) {
        
        double sum = n % 10 + (n / 10) % 10 + (n / 100) % 10;
        
        cout << sum << endl;
    }
}

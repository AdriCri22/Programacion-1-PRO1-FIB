#include <iostream>
using namespace std;

int main() {
    int b, n;
    
    while (cin >> b >> n) { 
        int count = 0;
        
        if (2 <= b && 1 <= n) {
            while (n != 0) {
                count++;
                n = n / b;
            }
            
            cout << count << "\n";
        }
    }
}

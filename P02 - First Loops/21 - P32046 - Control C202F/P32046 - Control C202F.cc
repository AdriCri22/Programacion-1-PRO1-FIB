#include <iostream>
using namespace std;

int main() {
    int n, i, count = 0;
    cin >> n;
    
    if (100 <= n) {
    cout << "nombres que acaben igual que " << n << ":\n";
        int n1 = n % 10;
        int n2 = (n / 10) % 10;
        int n3 = (n / 100) % 10;
        
        while (cin >> i) {
            if (100 <= i) {
                int i1 = i % 10;
                int i2 = (i / 10) % 10;
                int i3 = (i / 100) % 10;
                
                if (n1 == i1 && n2 == i2 && n3 == i3) {
                    count++;
                    cout << i << "\n";
                }
            }
        }
        
        cout << "total: " << count << endl;
    }
}

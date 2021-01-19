#include <iostream>
using namespace std;

int main() {
    int n, x, count = 0, num = 0;
    
    cin >> n;
    
    while (cin >> x and x != -1) {
        count++;
        if (count == n) {
            num = x;
        } 
    }
    
    cout << "At the position " << n << " there is a(n) " << num << "." << endl;
}

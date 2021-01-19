#include <iostream>
using namespace std;

int main() {
    int r, c, sum = 0;
    
    cin >> r >> c;
        
    for (int i = 1; i <= r; i++) {
            
        for (int k = 1; k <= c; k++) {
            char n;
            cin >> n;
            sum += n - '0';
            
        }
    }
    
    cout << sum << endl;
}

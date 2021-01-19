#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool first = true;
    
    while (cin >> m >> n) {
        int count = 9;
        
        if (!first) {
            cout << endl;
        }
        
        for (int i = 1; i <= m; i++) {
            
            for (int k = 1; k <= n; k++) {
                cout << count;
                count--;
                
                if (count == -1) count = 9;
            }
            cout << endl;
            first = false;
        }
    }
}

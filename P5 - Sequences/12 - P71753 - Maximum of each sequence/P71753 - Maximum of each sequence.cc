#include <iostream>
using namespace std;

int main() {
    int n, m, max = 0;
    
    while (cin >> n) {
    
        for (int i = 0; i < n; i++) {
            cin >> m;
            if (i == 0) max = m;
            else if (max < m) max = m;
        }
        
        cout << max << endl;
    }
}

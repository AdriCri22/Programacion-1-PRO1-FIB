#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    int n, m;
    
    while (cin >> n >> m) {
        if (m <= n) {
            double Hn = 0.0;
            
            for (int i = (m + 1); i <= n; i++) {
                Hn += 1.0 / i;
            }
            
            cout << Hn << endl;
        }
    }
}

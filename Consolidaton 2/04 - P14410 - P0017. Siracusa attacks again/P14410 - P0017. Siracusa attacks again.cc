#include <iostream>
using namespace std;

void converge(int n, int& k, int& far) {
    if (far < n) far = n; 
    while (n != 1) {
        if (far < n) far = n; 
        
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
            
        k++;
    }
}

int main() {
    int m, p, far = 0;
    cin >> m >> p;
    
    for (int i = 1; i <= m; i++) {
        int n_steps = 0;
        
        converge(i, n_steps, far);
        
        if (p <= n_steps) cout << i << endl;
    }
    
    cout << "The greatest reached number is " << far << "." << endl;
}

#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        double p, min, max, sum = 0, count = 0;
        int m;
        
        cin >> m;
        
        for (int k = 0; k < m; k++) {
            cin >> p;
            
            if (k == 0) {
                min = p;
                max = p;
            }
    
            count++;
            sum += p;
            
            if (p < min) min = p;
            else if (max < p) max = p;
        }
        cout << min << " " << max << " " << sum / count << endl;
    }
}

#include <iostream>
using namespace std;

int main () {
    int d, n, t, g, count = 0;
    cin >> d >> n >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> g;
        
        if (n + g > d) {
            count++;
        }
        
        n = n + g - d;
    }
    cout << count << endl;
}

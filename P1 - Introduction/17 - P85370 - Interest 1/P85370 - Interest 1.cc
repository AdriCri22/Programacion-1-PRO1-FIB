#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed); 
    cout.precision(4);
    
    double c, i;
    int t;
    string w;
    
    cin >> c >> i >> t >> w;
    
    if (w == "simple") {
        double interest = (c * (i / 100)) * t + c;
        cout << interest;
    } else {
        
        double r = 1 + (i / 100);
        
        for (int n = 1; n < t; n++) {
            r = r * (1 + (i / 100));
        }
        
        double interest = c * r;
        cout << interest;
    }
    
    cout << endl;
}

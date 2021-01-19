#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout.setf(ios::fixed);
    cout.precision(0);
    
    int floor_x = x;
    
    if ((x - floor_x) != 0) {
    
        int ceiling_x = floor_x + 1;
    
        if ((x - floor_x) >= 0.5) {
            x = ceiling_x;
        } else {
            x = floor_x;
        }
        
        cout << floor_x << " " << ceiling_x << " " << x << endl;
    } else {
        cout << x << " " << x << " " << x << endl;
    }   
}

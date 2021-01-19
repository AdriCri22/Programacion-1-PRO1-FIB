#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed); 
    cout.precision(6);
    int n, count = 0;
    cin >> n;
    
    while (count < n) {
        count++;
        string name;
        double a, b, r;
        cin >> name;
        
        if (name == "rectangle") {
            cin >> a >> b;
            cout << a * b << endl;
        } else if (name == "circle") {
            cin >> r;
            cout << 3.14159265358979323846 * r * r << endl;
        }
    }
}

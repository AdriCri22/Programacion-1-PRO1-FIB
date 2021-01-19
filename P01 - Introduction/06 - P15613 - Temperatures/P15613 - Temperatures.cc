#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    if (t > 30) {
        cout << "it's hot";
    } else if (t < 10) {
        cout << "it's cold";
    } else {
        cout << "it's ok";
    }
    
    if (t >= 100) {
        cout << "\nwater would boil";
    } else if ( t <= 0) {
        cout << "\nwater would freeze";
    }
    
    cout << endl;
}

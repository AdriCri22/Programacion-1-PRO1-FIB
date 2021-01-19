#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a <= b) {
    
        for (int i = a; i < b; i++) {
            cout << i << ",";
        }
        
        cout << b << endl;
    } else {
        cout << endl;
    }
}

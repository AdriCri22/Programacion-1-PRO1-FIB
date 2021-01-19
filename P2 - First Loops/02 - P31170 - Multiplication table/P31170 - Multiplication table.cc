#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i < 10; i++) {
        cout << n << "*" << i << " = " << n*i << "\n";
    }
    
    cout << n << "*10 = " << n*10 << endl;
}

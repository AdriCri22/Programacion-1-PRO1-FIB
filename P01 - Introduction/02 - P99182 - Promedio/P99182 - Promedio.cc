#include <iostream>
using namespace std;

int main() {
    int k, h;
    cin >> k >> h;
    
    if (k > -1001 || k < 1001 || h > -1001 || h < 1001){
        cout << double (k + h) / 2 << endl;
    }
} 
    

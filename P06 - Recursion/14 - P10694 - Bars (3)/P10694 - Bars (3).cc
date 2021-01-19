#include <iostream>
using namespace std;


void bars(int x) {
    if (x == 1) cout << "*" << endl;
    else {
        bars(x - 1);
        bars(x - 1);
        for (int i = 0; i < x; i++) cout << "*";
        cout << endl;
    }
}


int main() {
    int x;
    cin >> x;
    
    bars(x);
}

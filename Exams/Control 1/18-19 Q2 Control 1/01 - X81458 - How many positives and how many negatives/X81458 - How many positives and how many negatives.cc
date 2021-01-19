#include <iostream>
using namespace std;

int main() {
    int n; 
    int count = 0, Pos = 0, Neg = 0;
    
    while (cin >> n) {
        count++;
        if (0 < n) Pos++;
        if (n < 0) Neg++;
    }
    
    cout << "Pos: " << Pos << endl << "Neg: " << Neg << endl << "Tot: " << count << endl;
}

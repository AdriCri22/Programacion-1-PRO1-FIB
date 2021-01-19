#include <iostream>
using namespace std;

void change_order(int& n) {
    string str;
    if (cin >> str and str != "." and 0 < n) {
        change_order(n);
        if (n != 0) {
            cout << str << endl;
            n -= 1;
        }
    }  
}

int main() {
    int n;
    
    cin >> n;
        
    change_order(n);
}

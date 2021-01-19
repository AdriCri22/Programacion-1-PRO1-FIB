#include <iostream>
using namespace std;

char encoded(char c, int k) {
    
    if (c == '_') c = ' ';
    else if (c <= 'z' and 'a' <= c) {
        k = k % ('z' - 'a' + 1);
            
        if (c + k <= 'z') c = c + k + 'Z' - 'z';
        else {
            k -= 'z' - c + 1;
            c = 'a' + k + 'Z' - 'z';
        }
    } else return c;
    
    return c;
}

int main() {
    char c;
    int k;
    
    while (cin >> k) {
        
        while (cin >> c and c != '.') {
            cout << encoded(c, k);
        }
        
        cout << endl;
    }
}

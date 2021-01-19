#include <iostream>
using namespace std;

int main() {
    char c;
    int pth = 0, count = 0;
    bool fine = true;
    
    while (cin >> c and (c == '(' or c == ')')) {
        count++;
        if (c == '(') pth++;
        else if (c == ')') pth--;
        
        if (pth == 0 and count % 2 == 0 and c == ')') count = 0;
        if (count == 1 and c == ')') fine = false;
    }
    
    if (pth == 0 and count == 0 and fine) cout << "yes" << endl;
    else cout << "no" << endl;
}

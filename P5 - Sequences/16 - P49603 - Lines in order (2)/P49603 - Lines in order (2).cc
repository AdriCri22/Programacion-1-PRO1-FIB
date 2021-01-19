#include <iostream>
using namespace std;

int main() {
    int n, count = 1, position = 0;
    bool found = false;
    
    while (cin >> n) {
        string str, str2;
        bool first = true, order = true;
        for (int i = 0; i < n; i++) {
            cin >> str;
            if (first) {
                str2 = str;
                first = false;
            } else if (str < str2) order = false;
            
            str2 = str;
        }
        if (order or n == 0) {
            found = true;
            position = count;
        }
        count++;
    }
    
    if (found) cout << "The last line in increasing order is " << position << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}

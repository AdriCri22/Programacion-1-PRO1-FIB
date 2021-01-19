#include <iostream>
using namespace std;

int main() {
    int n, count = 1, position = 0;
    bool first_pos = true, found = false;
    
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
        if (order and first_pos) {
            first_pos = false;
            found = true;
            position = count;
        }
        if (n == 0 and first_pos) {
            first_pos = false;
            found = true;
            position = count;
        }
        count++;
    }
    
    if (found) cout << "The first line in increasing order is " << position << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}

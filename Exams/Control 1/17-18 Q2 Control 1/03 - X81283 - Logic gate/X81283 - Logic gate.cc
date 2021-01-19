#include <iostream>
#include <string>
using namespace std;

void logic_gate(char c, bool x, bool y) {
    bool x0 = x;
    bool y0 = y;
    
    if (c == 'T') {
        x = x0 and y0;
        y = x0 or y0;
    } else {
        x = x0 or y0;
        y = x0 and y0;
    }
    cout << boolalpha << x << " " << y << endl;
}

int main() {
    string a, b;
    char c;
    while (cin >> c >> a >> b) {
        bool x = (a == "true");
        bool y = (b == "true");
        logic_gate(c, x, y);
        // with flag "boolalpha", the values of the booleans
        // are printed "true" or "false" instead of 1 or 0 
        //cout << boolalpha << x << ' ' << y << endl;
    }
}

#include <iostream>
using namespace std;

int main() {
    char letter;
    int a = 0, b = 0;
    
    while (cin >> letter) {
        if (letter == 'n') {
            b--;
        } else if (letter == 's') {
            b++;
        } else if (letter == 'w') {
            a--;
        } else if (letter == 'e') {
            a++;
        }
    }
    
    cout << "(" << a << ", " << b << ")" << endl;
}

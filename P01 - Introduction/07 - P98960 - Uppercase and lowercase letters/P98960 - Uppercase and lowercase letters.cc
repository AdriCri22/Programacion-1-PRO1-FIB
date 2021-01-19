#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
    if (isupper(c)) {
        c = tolower(c);
    } else {
        c = toupper(c);
    }
    
    cout << c << endl;
}

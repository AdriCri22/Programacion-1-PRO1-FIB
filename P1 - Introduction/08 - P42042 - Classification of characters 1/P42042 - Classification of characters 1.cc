#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
    if (isupper(c)) {
        cout << "uppercase";
    } else {
        cout << "lowercase";
    }
    
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
        cout << "\nvowel";
    } else {
        cout << "\nconsonant";
    }
    cout << endl;
}

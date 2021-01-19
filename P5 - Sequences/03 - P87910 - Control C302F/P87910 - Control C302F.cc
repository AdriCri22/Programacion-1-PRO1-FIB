#include <iostream>
using namespace std;

void morse(char c, int& n) {
    int count = 0;
    cin >> n;
    
    while (cin >> c) {
        if (c == 'a') {
        cout << ".-";
        count += 2;
        } else if (c == 'e') {
            cout << ".";
            count += 1;
        } else if (c == 'i') {
            cout << "..";
            count += 2;
        } else if (c == 'o') {
            cout << "---";
            count += 3;
        } else if (c == 'u') {
            cout << "..-";
            count += 3;
        }
        
        if (n <= count) {
            cout << endl;
            count = 0;
        }
    }
    
    if (0 < count) {
        cout << endl;
    }
}

int main() {
    int n = 0;
    char c = 'a';
    
    morse(c, n);
    
    cout << "STOP" << endl;
}

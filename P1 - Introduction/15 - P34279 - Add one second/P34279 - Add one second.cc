#include <iostream>
using namespace std;

int main() {    
    int h, m, s;
    cin >> h >> m >> s;
    
    if (h < 24 && m < 60 && s < 60) {
        if (s < 59) {
            s = s + 1;
        } else if (m < 59) {
            s = 0;
            m = m + 1;
        } else if (h < 23) {
            s = 0;
            m = 0;
            h = h + 1;
        } else {
            s = 0;
            m = 0;
            h = 0;
        }
        
        if (h < 10) {
            cout << "0" << h;
        } else {
            cout << h;
        }
        
        if (m < 10) {
            cout << ":0" << m;
        } else {
            cout << ":" << m;
        }
        
        if (s < 10) {
            cout << ":0" << s;
        } else {
            cout << ":" << s;
        }
    }
    
    cout << endl;
}

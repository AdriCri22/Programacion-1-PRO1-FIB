#include <iostream>
using namespace std;

void change_order(int& n, int& count) {
    string str;
    if (cin >> str and str != ".") {
        n++;
        change_order(n, count);
        
        if (n / 2 < count) {
            cout << str << endl;
        }
        count++;
    }  
}

int main() {
    int n = 1, count = 1;
        
    change_order(n, count);
}

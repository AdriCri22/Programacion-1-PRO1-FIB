#include <iostream>
using namespace std;

void change_order(string str) {
    while (cin >> str) {
        change_order(str);
        cout << str << endl;
    }  
}

int main() {
    string str;
    
    change_order(str);
}

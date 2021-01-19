#include <iostream>
using namespace std;

void change_order(string str) {
    if (cin >> str and str != "end") {
        change_order(str);
        cout << str << endl;
    }  
}

int main() {
    string str;
    
    change_order(str);
}

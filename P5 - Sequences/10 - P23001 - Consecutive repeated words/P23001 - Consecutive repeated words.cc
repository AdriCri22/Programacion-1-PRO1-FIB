#include <iostream>
using namespace std;

int main() {
    string first;
    cin >> first;
    string next;
    
    int lenght = 1, longest = 1;
    
    while (cin >> next) {
        if (first != next) lenght = 0;
        else {
            lenght = lenght + 1;
            if (lenght > longest) longest = lenght;
        }
    }
    
    cout << longest << endl;
}

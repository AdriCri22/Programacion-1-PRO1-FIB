#include <iostream>
using namespace std;

int main() {
    char element_1, element_2;
    cin >> element_1 >> element_2;
    
    if (element_1 == 'A' && element_2 == 'P') {
        cout << "1";
    } else if (element_1 == 'A' && element_2 == 'V') {
        cout << "2";
    } else if (element_1 == 'P' && element_2 == 'A') {
        cout << "2";
    } else if (element_1 == 'P' && element_2 == 'V') {
        cout << "1";
    } else if (element_1 == 'V' && element_2 == 'A') {
        cout << "1";
    } else if (element_1 == 'V' && element_2 == 'P') {
        cout << "2";
    } else {
        cout << "-";
    }
    
    cout << endl;
}

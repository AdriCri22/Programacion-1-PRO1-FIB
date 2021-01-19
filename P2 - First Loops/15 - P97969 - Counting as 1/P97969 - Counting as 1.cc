#include <iostream>
using namespace std;

int main() {
    char letters;
    int count = 0;
    
    while (letters != '.') {
        cin >> letters;
        if (letters == 'a') {
            count++;
        }
    }
    cout << count << endl;
}

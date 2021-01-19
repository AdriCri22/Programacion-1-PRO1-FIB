#include <iostream>
using namespace std;

int main() {
    string word, max, max2;
    
    cin >> max >> max2;
    
    if (max < max2) {
        word = max;
        max = max2;
        max2 = word;
    }
    
    while (cin >> word) {
        
        if (word < max and max2 < word) max2 = word;
        else if (max < word) {
            max2 = max;
            max = word;
        }
        else if (max == max2 and word < max) max2 = word;
    }
    
    cout << max2 << endl;
}

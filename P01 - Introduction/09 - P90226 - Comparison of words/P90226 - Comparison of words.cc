#include <iostream>
using namespace std;

int main() {
    string word_1, word_2;
    cin >> word_1 >> word_2;
    
    if (word_1 > word_2) {
        cout << word_1 << " > " << word_2;        
    } else if (word_1 < word_2) {
        cout << word_1 << " < " << word_2;        
    } else {
        cout << word_1 << " = " << word_2;
    }
    
    cout << endl;
}

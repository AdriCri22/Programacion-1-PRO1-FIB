#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;
    bool start_word = false, end_word = false, right_order = false;
    
    while (not end_word and cin >> str) {
        if (str == "end") {
            end_word = true;
            if (start_word) right_order = true;
        } else if (str == "beginning") start_word = true;
        else if (start_word and not end_word) count++;
    }
    
    if (start_word and end_word and right_order) cout << count << endl;
    else cout << "wrong sequence" << endl;
}

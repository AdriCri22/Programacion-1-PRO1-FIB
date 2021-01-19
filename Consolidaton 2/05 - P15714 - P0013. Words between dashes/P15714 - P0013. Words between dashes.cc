#include <iostream>
using namespace std;

void counter(int count, int& short_words, int& medium_words, int& long_words) {
    if (1 <= count and count <= 4) short_words++;
    else if (5 <= count and count <= 9) medium_words++;
    else if (10 <= count) long_words++;
}

int main() {
    char c;
    int count = 0, short_words = 0, medium_words = 0, long_words = 0;
    
    while (cin >> c and c != '.') {
        if (c == '-') {
            counter(count, short_words, medium_words, long_words);
            count = 0;
        }
        else if (c != '-') count++;
    }
    counter(count, short_words, medium_words, long_words);
    
    //cout << count << endl;
    cout << short_words << "," << medium_words << "," << long_words << endl;
}

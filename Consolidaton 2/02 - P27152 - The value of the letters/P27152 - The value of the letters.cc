#include <iostream>
using namespace std;
void count_letters(char c, int& count) {
    if (c == 'a' or c == 'e') count += 1;
    else if (c == 'o' or c == 's') count += 2;
    else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') count += 3;
    else if (c == 'c' or c == 'l' or c == 't' or c == 'u') count += 4;
    else if (c == 'm' or c == 'p') count += 5;
    else if (c == 'b' or c == 'f' or c == 'g' or c == 'h' or c == 'j' or c == 'q' or c == 'v' or c == 'x' or c == 'y' or c == 'z') count += 6;
    else if (c == 'k' or c == 'w') count += 7;
}

int main() {
    char c;
    int count = 0;
    
    while (cin >> c) {
        count_letters(c, count);
    }
    
    cout << count << endl;
}

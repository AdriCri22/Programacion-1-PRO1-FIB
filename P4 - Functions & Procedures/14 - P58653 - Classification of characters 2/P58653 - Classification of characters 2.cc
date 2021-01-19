#include <iostream>
using namespace std;


void print_line(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "true" << endl;
         else cout << "false" << endl;
}

void letter(char c) {
    if ('a' <= c and c <= 'z') {
        print_line(c, "letter", true);
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            print_line(c, "vowel", true); print_line(c, "consonant", false);
        } else {
            print_line(c, "vowel", false); print_line(c, "consonant", true);
        }
        
        print_line(c, "uppercase", false); print_line(c, "lowercase", true);
        print_line(c, "digit", false);
    } else if ('A' <= c and c <= 'Z') {
        print_line(c, "letter", true);
        if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') {
            print_line(c, "vowel", true); print_line(c, "consonant", false);
        } else {
            print_line(c, "vowel", false); print_line(c, "consonant", true);
        }
        
        print_line(c, "uppercase", true); print_line(c, "lowercase", false);
        print_line(c, "digit", false);
    } else { 
        print_line(c, "letter", false);
        print_line(c, "vowel", false);
        print_line(c, "consonant", false);
        print_line(c, "uppercase", false);
        print_line(c, "lowercase", false);
        if ('0' <= c and c <= '9') print_line(c, "digit", true);
        else print_line(c, "digit", false);
    }
}

int main() {
    char c;
    while (cin >> c) {
        letter(c);
    }   
}

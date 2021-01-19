#include <iostream>
using namespace std;

int main() {
   char c;
   
   while (c != '#') {
       cin >> c;
       
        if (c == 'a' or c == 'A') cout << 'Z';
        if (c == 'b' or c == 'B') cout << 'Y';
        if (c == 'c' or c == 'C') cout << 'X';
        if (c == 'd' or c == 'D') cout << 'W';
        if (c == 'e' or c == 'E') cout << 'V';
        if (c == 'f' or c == 'F') cout << 'U';
        if (c == 'g' or c == 'G') cout << 'T';
        if (c == 'h' or c == 'H') cout << 'S';
        if (c == 'i' or c == 'I') cout << 'R';
        if (c == 'j' or c == 'J') cout << 'Q';
        if (c == 'k' or c == 'K') cout << 'P';
        if (c == 'l' or c == 'L') cout << 'O';
        if (c == 'm' or c == 'M') cout << 'N';
        if (c == 'n' or c == 'N') cout << 'M';
        if (c == 'o' or c == 'O') cout << 'L';
        if (c == 'p' or c == 'P') cout << 'K';
        if (c == 'q' or c == 'Q') cout << 'J';
        if (c == 'r' or c == 'R') cout << 'I';
        if (c == 's' or c == 'S') cout << 'H';
        if (c == 't' or c == 'T') cout << 'G';
        if (c == 'u' or c == 'U') cout << 'F';
        if (c == 'v' or c == 'V') cout << 'E';
        if (c == 'w' or c == 'W') cout << 'D';
        if (c == 'x' or c == 'X') cout << 'C';
        if (c == 'y' or c == 'Y') cout << 'B';
        if (c == 'z' or c == 'Z') cout << 'A';
   }
   cout << "#" << endl;
}

#include <iostream>
using namespace std;

void check_char(char c, int& sum, int i, int& position) {
    if (c == '1') sum += 1 * i;
    else if (c == '2') sum += 2 * i;
    else if (c == '3') sum += 3 * i;
    else if (c == '4') sum += 4 * i;
    else if (c == '5') sum += 5 * i;
    else if (c == '6') sum += 6 * i;
    else if (c == '7') sum += 7 * i;
    else if (c == '8') sum += 8 * i;
    else if (c == '9') sum += 9 * i;
    else if (c == '0') sum += 0 * i;
    else if (c == 'X') sum += 10 * i;
    else if (c == '?') position = i;
}

int main() {
   char c;
   int sum = 0, position = 0, count = 10;
   while (cin >> c and c != '.') {
       if (count > 1) {
            check_char(c, sum, count, position);
            count--;
       } else {
            check_char(c, sum, count, position);
            int k = 0;
            while ((position * k + sum) % 11 != 0) k++;
            
            if (position == 1 and k == 10) cout << "X" << endl;
            else cout << k << endl;
            count = 10;
            sum = 0;
        }
    }
}

#include <iostream>
using namespace std;

int main() {
    int a, b, c, count_in = 0;
    
    while (cin >> a >> b >> c) {    
        if (100 <= a and a <= 999 and 100 <= b and b <= 999 and 100 <= c and c <= 999) {
            int a1 = a % 10;
            int a3 = (a / 100) % 10;
            int b1 = b % 10;
            int b3 = (b / 100) % 10;
            int c1 = c % 10;
            int c3 = (c / 100) % 10;
            
            if (a1 < b1 and b1 < c1 and a1 == a3 and b1 == b3 and c1 == c3) { 
                count_in++;
            }
        }
    }
    cout << "3-Increasing: " << count_in << endl;
}

#include <iostream>
using namespace std;

int main() {
   int n, k, t, money = 0;
   
   while (cin >> n >> k >> t) {
        if (n == k and n == t) {
            if (n % 2 == 0) {
                money += 10;
            } else if (n % 3 == 0) {
                money += 15;
            } else {
                money += 5;
            }
        }
   }
    cout << money << endl;
}

#include <iostream>
using namespace std;

int main() {
   int n, k, t;
   
   while (cin >> n >> k >> t) {
        if (n != k or n != t) cout << "Loss" << endl;
        if (n == k and n == t) {
            if (n % 2 == 0) {
                cout << "Apples" << endl;
            } else if (n % 3 == 0) {
                cout << "Bananas" << endl;
            } else {
                cout << "Joker" << endl;
            }
        }
   }
}

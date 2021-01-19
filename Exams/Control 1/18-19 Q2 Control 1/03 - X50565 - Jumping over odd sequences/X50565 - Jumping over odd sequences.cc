#include <iostream>
using namespace std;

int abundance(int);

int main() {
   int x, count = 0, n;
   
   cin >> x;
   
   if (0 < x) {
       n = x;
       cout << "aterrant a: " << x << endl;
        while (cin >> x) {
            count++;
            if (0 < x) {
                if (n == count) {
                    n += x;
                    cout << "aterrant a: " << x << endl;
                } else {
                    if (x % 2 == 0) cout << "sobrevolant parell: " << x << endl;   
                }
            }
        }
   }
}

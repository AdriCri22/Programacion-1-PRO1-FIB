#include <iostream>
using namespace std;

int main() {
   int n;
   char c, h;
   
   while (cin >> n >> c >> h) {
        for (int i = 1; i <= n; i++) {
            for (int m = 1; m < i; m++) {
                cout << c;
            }
            for (int k = i; k <= n; k++) {
                cout << h;
            }
            cout << endl;;
        }
        cout << endl;
   }
}

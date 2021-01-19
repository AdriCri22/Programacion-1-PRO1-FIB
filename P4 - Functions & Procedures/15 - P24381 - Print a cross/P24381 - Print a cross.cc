#include <iostream>
using namespace std;


void cross(int n, char c) {
    for (int i = 0; i < n; i++) {
        if (i == (n / 2)) {
            for (int k = 0; k < n; k++) {
                cout << c;
            }
            cout << endl;
        } else {
            for (int k = 0; k < (n / 2); k++) {
                cout << " ";
            }
            cout << c << endl;;   
        }
    }
}


int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
}

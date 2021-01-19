#include <iostream>
#include <vector>
using namespace std;

bool number_equal(vector<int> S) {
    int n = 0;
    for (int i = 0; i < S.size(); i++) {
        n += S[i];
    }
    for (int i = 0; i < S.size(); i++) {
        if ((n / 2.0) == int (n / 2) and n / 2 == S[i]) return true; //Compreba si n / 2 es un numero entero y si existe algún valor del vector que sea igual a n / 2
    }
   return false;
}

int main() {
    int n;
    
    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < n; i++) cin >> S[i];
        if (number_equal(S)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

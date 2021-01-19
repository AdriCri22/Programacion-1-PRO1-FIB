#include <iostream>
#include <vector>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;                //Los valores 1 y 0 no son primos
    else if (n == 2) return true;           //2 es primo
    else if (n % 2 == 0) return false;      //Si es par no es primo
    for (int i = 3; i * i <= n; i += 2) {   //Por cada impar comprovar si es primo
        if (n % i == 0) return false;
    }
    return true;
}

//Comprueba si hay alguna combinación que cumpla si hay 2 elementos que cumplan que su suma sea un número primo
bool get_sum(vector<int> S) {
    for (int i = 0; i < S.size(); i++) {
        for (int k = i + 1; k < S.size(); k++) {
            if (prime(S[i] + S[k])) return true;
        }
    }
    return false;
}

int main() {
    int n;
    
    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < n; i++) cin >> S[i];
        if (get_sum(S)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

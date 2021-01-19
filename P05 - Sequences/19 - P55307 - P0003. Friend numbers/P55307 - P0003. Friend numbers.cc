#include <iostream>
using namespace std;

int sum_divisors(int a) {
    int sum = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) sum += i;
    }
    return sum;
}

bool are_friends(int a, int b) {    
    if (a != b and sum_divisors(a) == b and sum_divisors(b) == a) return true;
    else return false;
}

int main() {
    int n, m;
    bool isFirst = true;
    
    while (cin >> n >> m) {
        if (isFirst) {
            if (are_friends(n, m)) {
                cout << "(" << n << " " << m << ")";
                isFirst = false;
            }
        } else {
            if (are_friends(n, m)) cout << ",(" << n << " " << m << ")";
        }
    }
    cout << endl;
}

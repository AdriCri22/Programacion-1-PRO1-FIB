#include <iostream>
using namespace std;

bool is_increasing(int n) {
    if (n < 10) return true;
    else if (n / 10 % 10 <= n % 10) return is_increasing(n / 10);
    else return false;
}

int main() {
    int n;
    cin >> n;
    
    cout << is_increasing(n) << endl;
}

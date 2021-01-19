#include <iostream>
using namespace std;

bool is_perfect(int x) { 
    int sum = 1;
    for (int i = 2; i * i < x; i++) {
        if (x % i == 0) sum += i +  x / i;
    }
    
    if (sum == x and x != 0 and x != 1) return true;
    else return false;
}

int main () {
  int x;
  while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}

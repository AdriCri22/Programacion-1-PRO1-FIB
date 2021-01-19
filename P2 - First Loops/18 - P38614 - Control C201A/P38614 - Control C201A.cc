#include <iostream>
using namespace std;

int main() {
    int n, r, odd_sum, length = 0;
    cin >> n;
    
    r = n;
    
    odd_sum = r % 10;
    
    while (r /= 10) {
        if (length % 2 != 0) {
            odd_sum += r % 10;
        }
        length++;
    }
    
    if (odd_sum % 2 == 0) {
       cout << n << " IS COOL" << endl; 
    } else  {
        cout << n << " IS NOT COOL" << endl;
    }
}

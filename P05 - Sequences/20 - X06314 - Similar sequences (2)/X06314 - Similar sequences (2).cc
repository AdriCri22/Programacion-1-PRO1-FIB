#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int m, sum2 = 0, last2 = 0, count = 1;
    
    while (cin >> m and m != 0) {
        sum2 = m;
        last2 = m;
        int k;
        while (cin >> k and k != 0) {
            sum2 += k;
            last2 = k;
        }
        
        if (sum2 == sum and last2 == last) count++;
    }
    
    cout << count << endl;
}

int main() {
    int n, sum = 0, last = 0;
    
    while (cin >> n and n != 0) {
        sum += n;
        last = n;
    }
    
    info_sequence(sum, last); 
}

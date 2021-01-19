#include <iostream>
using namespace std;

int main() {
    double n;
    double sum = 0;
    int count = 0;
    cout.setf(ios::fixed); 
    cout.precision(2);
    
    while (cin >> n) {
        if (0 < n) {
            count++;
            sum += n;
        }
    }
    
    if (0 < sum) {
      sum = sum / count;  
    } else {
        sum = 0;
    }
        
    cout << sum << endl;
}

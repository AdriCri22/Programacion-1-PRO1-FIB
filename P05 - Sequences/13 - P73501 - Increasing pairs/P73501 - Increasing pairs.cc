#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int firstNumber = 0, count = 0;
        while (cin >> m and m != 0) {
            if (firstNumber == 0) firstNumber = m;
            else if (firstNumber < m) {
                count++;
                firstNumber = m;
            } else if (m < firstNumber) firstNumber = m;
        }
        cout << count << endl;
    }
    
}

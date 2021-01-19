#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
    int n, pos2 = 1;
    
    while (cin >> n and n != max and n != 0) pos2++;
    
    if (n == max) cout << max << " " << lpos << " " << pos2 << endl;
    else cout << max << " " << lpos << " -" << endl;
}

int main() {
    int n, max = 0, pos = 0, count = 1;
    
    while (cin >> n and 0 < n) {
        if (max == 0 and pos == 0) {
            max = n;
            pos = count;
        } else if (max <= n) {
            max = n;
            pos = count;
        }
        count++;
    }
    
    infoSequence(max, pos); 
}

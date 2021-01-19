#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int r = 0;
    
    for (int i = 0; i < n; i++) {
        r = r + (i + 1) * (i + 1);
    }
    
    cout << r << endl;
}

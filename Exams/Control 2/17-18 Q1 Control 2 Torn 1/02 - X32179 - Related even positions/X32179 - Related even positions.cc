#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int count = 1;
    cin >> a >> b;
    
    while (cin >> c >> d) {
        if (b == d) count++;
    }
    cout << count << endl;
}

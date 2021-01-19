#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    
    while (cin >> n and n % 2 != 0) {
        count++;
    }
    cout << count << endl;
}

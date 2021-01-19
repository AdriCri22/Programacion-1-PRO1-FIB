#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    char c, h, a;
    
    cin >> n;
    
    if (0 < n) {
        for (int i = 1; i <= n; i++) {
            cin >> c >> h >> a;
                if (c == '-' and h == '-' and a == '/') count++;
                if (c == '-' and h == '/' and a == '/') count++;
                if (c == '/' and h == '/' and a == '/') count++;
        }
    }
    cout << count << endl;
}

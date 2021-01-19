#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    double max = v[0];
    int pos = 0;
    for (int i = 1; i <= m; i++) {
        if (max < v[i]) {
            max = v[i];
            pos = i;
        }
    }
    return pos;
}

int main() {
    int m;
    cin >> m;
    
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    cout << position_maximum(v, m) << endl;
}

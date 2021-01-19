#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right) {
    int m = (left + right) / 2;
    if (left > right) return -1;
    else if (x < v[m]) return position(x, v, left, m - 1);
    else if (x > v[m]) return position(x, v, m + 1, right);
    else return m;
}

int main() {
    int n, left, right;
    cin >> n;
    vector<double> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    double x;
    cin >> x >> left >> right;
    cout << position(x, v, left, right) << endl;
}

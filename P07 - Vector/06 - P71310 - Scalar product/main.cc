#include <iostream>
#include <vector>
using namespace std;


double scalar_product(const vector<double>& u, const vector<double>& v);


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> u(n);
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> u[i];
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << scalar_product(u, v) << endl;
    }
}

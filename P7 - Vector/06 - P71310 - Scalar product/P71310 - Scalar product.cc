#include <iostream>
#include <vector>
using namespace std;


double scalar_product(const vector<double>& u, const vector<double>& v) {
    double sum = 0;
    for (int i = 0; i < u.size() and i < v.size(); i++) {
        sum += u[i] * v[i];
    }
    return sum;
}


int main() {
    int n;
    
    cin >> n;
    vector<double> u(n);
    for (int i = 0; i < n; i++) cin >> u[i];
    
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    cout << scalar_product(u, v) << endl;
}

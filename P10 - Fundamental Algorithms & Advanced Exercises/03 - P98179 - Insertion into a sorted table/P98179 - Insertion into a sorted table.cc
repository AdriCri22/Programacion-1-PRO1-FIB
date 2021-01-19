#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        if (v[size - 1] <= v[i]) {
            double n = v[size - 1];
            for (int k = size - 1; i < k; k--) {
                v[k] = v[k - 1];
            }
            v[i] = n;
        }
    }
}

int main() {    
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    insert(v);
    
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

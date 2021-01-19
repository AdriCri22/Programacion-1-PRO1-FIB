#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<double>& v) {
    for (int i = 1; i < v.size(); i++) {
        double x = v[i];
        int j = i;
        while (0 < j and x < v[j - 1]) {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = x;
    }
}

int main() {    
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    insertion_sort(v);
    
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

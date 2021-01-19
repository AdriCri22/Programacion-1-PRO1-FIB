#include <iostream>
#include <vector>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2) {
    vector<double> v3;
    int v1_size = v1.size();
    int v2_size = v2.size();
    int i = 0;
    int j = 0;
    while (i < v1_size and j < v2_size) {
        if (v2[j] < v1[i]) j++;
        else if (v1[i] == v2[j]) {
            i++;
            j++;
            while (v1[i - 1] == v1[i]) i++;
        } else if (v1[i] < v2[j]) {
            v3.push_back(v1[i]);
            i++;
            while (v1[i - 1] == v1[i]) i++;
        }
    }
    
    while (i < v1_size) {
        if (v1[i - 1] != v1[i]) {
            v3.push_back(v1[i]);
            i++;
        } else i++;
    }
    
    return v3;
}

int main() {    
    int n;
    
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; i++) cin >> v1[i];
    
    cin >> n;
    vector<double> v2(n);
    for (int i = 0; i < n; i++) cin >> v2[i];
    
    vector<double> v3 = difference(v1, v2);
    for (int i = 0; i < v3.size(); i++) cout << v3[i] << " ";
    cout << endl;
}

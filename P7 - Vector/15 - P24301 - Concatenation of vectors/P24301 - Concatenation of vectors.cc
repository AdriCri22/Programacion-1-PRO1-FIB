#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    vector<int> v3(v1.size() + v2.size());
    for (int i = 0; i < v1.size(); i++) v3[i] = v1[i];
    for (int i = 0; i < v2.size(); i++) v3[v1.size() + i] = v2[i];
    return v3;
}

int main() {
    int n;
    
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) cin >> v1[i];
    
    cin >> n;
    vector<int> v2(n);
    for (int k = 0; k < n; k++) cin >> v2[k];
    
    vector<int> v3 = concatenation(v1, v2);
    for (int i = 0; i < v3.size(); i++) cout << v3[i] << " ";
    cout << endl;
}

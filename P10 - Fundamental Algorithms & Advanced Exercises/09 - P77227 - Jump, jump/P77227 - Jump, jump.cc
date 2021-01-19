#include <iostream>
#include <vector>
using namespace std;


string exit(int p, vector<int>& v) {
    int size = v.size();
    int count = 0;
    while (v[p] != 0 and 0 <= p + v[p] and p + v[p] < size) {
        count = p;
        p = p + v[p];
        v[count] = 0;
    }
    
    if (size <= p + v[p]) return "right";
    else if (p + v[p] < 0) return "left";
    else return "never";
}

int main() {
    int p, n;
    while (cin >> p >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << exit(p, v) << endl;
    }
}

#include <iostream>
#include <vector>
using namespace std;

int number_peaks(const vector<int>& S) {
    int count = 0;
    
    for (int i = 1; i < S.size() - 1; i++) {
        if (S[i - 1] < S[i] and S[i + 1] < S[i]) count++;
    }
    return count;
}

vector<int> obtain_peaks(const vector<int>& v) {
    int m = number_peaks(v), k = 0;
    vector<int> w(m);
    cout << m << ":";
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i - 1] < v[i] and v[i + 1] < v[i]) {
            w[k] = v[i];
            k++;
            cout << " " << v[i];
        }
    }
    cout << endl;
    return w;
}

int main() {
    int n;
    
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    
    bool first = true;
    vector<int> w = obtain_peaks(S);
    if (0 < w.size()) {
        for (int i = 0; i < w.size() - 1; i++) {
            if (w[w.size() - 1] < w[i] and first) {
                cout << w[i];
                first = false;
            } else if (w[w.size() - 1] < w[i] and not first) cout << " " << w[i];
        }
    }
    if (first) cout << "-";
    cout << endl;
}

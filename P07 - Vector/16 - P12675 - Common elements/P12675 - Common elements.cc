#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
    int count = 0, last = 0, i = 0;
    while (i < X.size() and last < Y.size()) {
        if (X[i] < Y[last]) {
            i++;
        } else if (X[i] == Y[last]) {
            i++;
            last++;
            count++;
        } else {
            last++;
        }
    }
    return count;
}

/*int main() {
    int n;
    
    cin >> n;
    vector<int> X(n);
    for (int i = 0; i < n; i++) cin >> X[i];
    
    cin >> n;
    vector<int> Y(n);
    for (int k = 0; k < n; k++) cin >> Y[k];
    
    cout << common_elements(X, Y) << endl;
}*/

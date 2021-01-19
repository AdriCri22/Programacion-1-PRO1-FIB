#include <iostream>
#include <vector>
using namespace std;

//Pre: n > 0

void reverse(vector<int>& S) {
    int last = S.size() - 1;
    
    while (0 < last) {
        cout << S[last] << " ";
        last--;
    }
    cout << S[0];
}

int main() {
    int n;
    
    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < n; i++) cin >> S[i];
        if (n != 0) reverse(S);
        cout << endl;
    }
}

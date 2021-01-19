#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool contains(string s1, string s2) {
    int i = 0, j = 0;
    while (i + s2.size() <= s1.size() and j < s2.size()) {
        if (s2[j] == s1[i + j]) j++;
        else {
            j = 0;
            i++;
        }
    }
    if (j == s2.size()) return true;
    else return false;
}

void contained_words(vector<string> S) {
    for (int i = 0; i < S.size(); i++) {
        cout << S[i] << ":";
        for (int k = 0; k < S.size(); k++) {
            if (contains(S[i], S[k])) cout << " " << S[k];
        }
        cout << endl;
    }
}

int main() {
    int n;
    
    cin >> n;
    vector<string> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    
    contained_words(S);
}

#include <iostream>
#include <vector>
using namespace std;
 
 
vector<bool> ramps_pos (const vector<int>& S) {
    vector<bool> ramps(S.size());
    for (int i = 0; i < S.size() - 2; i++) {
            if (S[i] > S[i + 1] and S[i + 1] > S[i + 2]) ramps[i] = true;
            else if (S[i] < S[i + 1] and S[i + 1] < S[i + 2]) ramps[i] = true;
            else ramps[i] = false;
    }
    return ramps;
}
 
int pot_conflictives (const vector<bool>& S) {
    int count = 0;
    for (int i = 0; i < S.size(); i++) {
            if (S[i] == true and S[i + 1] == true) count++;
            if (S[i] == true and S[i + 2] == true) count++;
    }
    return count;
}
 
int main() {
    int n;
    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < n; i++) cin >> S[i];
        
        vector<bool> A = ramps_pos(S);
        cout << "positions with a ramp:";
        for (int i = 0; i < n; i++) {
                        if (A[i] == true) cout << " " << i;
        }
        cout << endl;
        cout << "potentially conflictive: " << pot_conflictives(A) << endl << "---" << endl;
    }
}

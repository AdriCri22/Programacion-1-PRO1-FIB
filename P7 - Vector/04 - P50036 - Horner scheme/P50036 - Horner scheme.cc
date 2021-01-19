#include <iostream>
#include <vector>

using namespace std;

int evaluate(const vector<int>& S, int x){
  int r = 0;
  
  for (int i = S.size() - 1; 0 <= i; i--){
    r = r*x + S[i];
  }
  
  return r;
}

int main() {
    int x;
    
    cin >> x;
    vector<int> S(x);
    for (int i = 0; i < S.size(); i++) cin >> S[i];
    
    cin >> x;
    
    cout << evaluate(S, x) << endl;;
}

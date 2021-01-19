#include <iostream>
#include <vector>
using namespace std;

//Pre: n > 0

int main() {
    int n;
    
    cin >> n;
    
    vector<int> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    
    int count = 0;
    for (int i = 0; i < n - 1; i++) {       //No se cuenta el último elemento
        if (S[n - 1] == S[i]) count++;
    }
    
    cout << count << endl;
}

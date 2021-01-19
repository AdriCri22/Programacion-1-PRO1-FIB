#include <iostream>
#include <vector>
using namespace std;


int evaluate(const vector<int>& P, int x);


int main()
{
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i=0; i<n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << evaluate(P,x) << endl;
    }
}

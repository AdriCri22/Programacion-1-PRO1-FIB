#include <vector>
#include <iostream>
using namespace std;


bool magic_square (const vector< vector<int> >& M);


int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        cout << magic_square(M) << endl;
}   }


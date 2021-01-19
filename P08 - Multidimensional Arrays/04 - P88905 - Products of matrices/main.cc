#include <vector>
#include <iostream>
using namespace std;


typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& A, const Matrix& B);


int main ()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matrix A(p,vector<int>(q));
        Matrix B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matrix C = product(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}

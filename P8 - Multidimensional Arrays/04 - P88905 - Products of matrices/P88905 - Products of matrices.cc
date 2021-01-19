#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void write_matrix(Matrix& M) {
    int r = M.size();          //numero de filas
    int c = M[0].size();      //numero de columnas
    for (int row = 0; row < r; row++)
        for (int column = 0; column < c; column++) 
            cin >> M[row][column];
}

void read_matrix(Matrix& M) {
    int r = M.size();          //numero de filas
    int c = M[0].size();      //numero de columnas
    for (int row = 0; row < r; row++) {
        bool first = false;
        for (int column = 0; column < c; column++) {
            if (not first) {
                cout << M[row][column];
                first = true;
            } else cout << " " << M[row][column];
        }
        cout << endl;
    }
}

Matrix product(const Matrix& a, const Matrix& b) {
    int a_row = a.size();
    int a_column = a[0].size();
    int b_column = b[0].size();
    
    Matrix c(a_row, vector<int>(b_column));
    
    
    for (int i = 0; i < a_row; i++) {
        for (int k = 0; k < b_column; k++) {
            int sum = 0;
            for (int t = 0; t < a_column; t++) {
                sum += a[i][t] * b[t][k];
            }
            c[i][k] = sum;   
        }
    }
    
    return c;
}
 
int main() {
    int n, m;
    
    cin >> n >> m;
    Matrix a(n, vector<int>(m));
    write_matrix(a);
    
    cin >> n >> m;
    Matrix b(n, vector<int>(m));
    write_matrix(b);
    
    
    Matrix c = product(a, b);
    read_matrix(c);
}

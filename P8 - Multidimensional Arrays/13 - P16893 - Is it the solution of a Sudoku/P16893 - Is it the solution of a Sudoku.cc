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

bool read_row(vector<int> S) {
    int v_size = S.size();
    for (int k = 1; k < 10; k++) {
        bool found = false;
        for (int i = 0; i < v_size and not found; i++) {
            if (S[i] == k) found = true; 
        }
        if (not found) return false;
    }
    return true;
}

bool read_rows(const Matrix& a) {
    int nrows = a.size();
    for (int i = 0; i < nrows; i++) {
        if (not read_row(a[i])) return false; 
    }
    return true;
}

bool read_columns(const Matrix& a) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    for (int j = 0; j < ncolumns; j++) {
        vector<int> S;
        for (int i = 0; i < nrows; i++) {
            S.push_back(a[i][j]);
        }
        if (not read_row(S)) return false;
    }
    
    return true;
}

bool read_submatrix(const Matrix& a, int max_row, int max_column, int min_row, int min_column) {
    vector<int> S;
    for (int i = min_row; i < max_row; i++) {
        for (int j = min_column; j < max_column; j++) {
            S.push_back(a[i][j]);
        }
    }
    if (not read_row(S)) return false;
    else return true;
}

bool read_matrix(const Matrix& a) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    for (int i = 0; i < nrows; i += 3) {
        for (int j = 0; j < ncolumns; j += 3) {
            if (not read_submatrix(a, i + 3, j + 3, i, j)) return false;
        }
    }
    return true;
}
 
int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        Matrix a(9, vector<int>(9));
        write_matrix(a);
        
        if (read_rows(a) and read_columns(a) and read_matrix(a)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

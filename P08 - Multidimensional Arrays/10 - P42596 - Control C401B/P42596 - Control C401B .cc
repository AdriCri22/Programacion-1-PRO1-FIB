#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void write_matrix(Matrix& M) {
    int r = M.size();           //numero de filas
    int c = M[0].size();        //numero de columnas
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

void min_max(const Matrix& mat, int& minimum, int& maximum) {
    int nrows = mat.size();
    int ncolumns = mat[0].size();
    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncolumns; j++) {
            if (mat[i][j] < minimum) minimum = mat[i][j];
            else if (maximum < mat[i][j]) maximum = mat[i][j];
        }
    }
}

int main() {
    int n, m;
    int count = 1;
    int position = 1;
    int rest = 0;
    
    while (cin >> n >> m) {
        Matrix a(n, vector<int>(m));
        write_matrix(a);
        
        int minimum = a[0][0];
        int maximum = a[0][0];
        min_max(a, minimum, maximum);
        
        if (rest < maximum - minimum) {
            rest = maximum - minimum;
            position = count;
        }
        
        count++;
    }
    
    cout << "la diferencia maxima es " << rest << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << position << endl;
}

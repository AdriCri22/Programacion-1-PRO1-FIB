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

bool position(Matrix a, int n, int m, int sum_1, int sum_2) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    int x = n;
    int y = m;
    while (0 <= x + sum_1 and x + sum_1 < nrows and 0 <= y + sum_2 and y + sum_2 < ncolumns) {
        if (a[x][y] < a[x + sum_1][y + sum_2]) {
            x += sum_1;
            y += sum_2;
        } else return false;
    }
    return true;
}

bool diagonals(Matrix a, int n, int m) {
    if (position(a, n, m, 1, 1) and position(a, n, m, -1, 1) and position(a, n, m, 1, -1) and position(a, n, m, -1, -1)) return true;
    else return false;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix a(n, vector<int>(m));
        write_matrix(a);
        
        cin >> n >> m;
        if (diagonals(a, n, m)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

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

void search_diagonal_bishop(const Matrix& a, int n, int m, bool right_bottom, bool left_bottom, bool right_top, bool left_top) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    int x = n;
    int y = m;
    bool bishop = false;
    while (not bishop and x < nrows and y < ncolumns and 0 <= x and 0 <= y) {
        if (a[x][y] == 'X') {
            bishop = true;
            if (right_bottom) {
                cout << "(" << n << "," << m << ")<->(" << x + 1 << "," << y + 1 << ")" << endl;
            } else if (left_bottom) {
                cout << "(" << n << "," << m + 2 << ")<->(" << x + 1 << "," << y + 1 << ")" << endl;
            } else if (right_top) {
                cout << "(" << n + 2 << "," << m << ")<->(" << x + 1 << "," << y + 1 << ")" << endl;
            } else if (left_top) {
                cout << "(" << n + 2 << "," << m + 2 << ")<->(" << x + 1 << "," << y + 1 << ")" << endl;
            }
            
            return;
        }
        if (right_bottom) {
            x++;
            y++;
        } else if (left_bottom) {
            x++;
            y--;
        } else if (right_top) {
            x--;
            y++;
        } else if (left_top) {
            x--;
            y--;
        }
    }
}

void search_bishop(const Matrix& a) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncolumns; j++) {
            if (a[i][j] == 'X') {
                search_diagonal_bishop(a, i + 1, j + 1, true, false, false, false);
                search_diagonal_bishop(a, i + 1, j - 1, false, true, false, false);
                search_diagonal_bishop(a, i - 1, j + 1, false, false, true, false);
                search_diagonal_bishop(a, i - 1, j - 1, false, false, false, true);
            }
        }
    }
}
 
int main() {
    int n, m;
    
    cin >> n >> m;
    Matrix a(n, vector<char>(m));
    write_matrix(a);
    
    search_bishop(a);    
}

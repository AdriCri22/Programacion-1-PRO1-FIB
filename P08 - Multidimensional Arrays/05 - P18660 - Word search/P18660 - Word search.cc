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

bool position (const Matrix& a, string str, int n, int m, bool horizontal, bool vertical, bool diagonal) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    int x = n;
    int y = m;
    string word(1, str[0]);
    for (int k = 1; k < str.size() and x < nrows and y < ncolumns; k++) {
        char c = str[k] - ('a' - 'A');
        if (str[k] == a[x][y] or c == a[x][y]) {
            word += str[k];
            if (horizontal) y++;
            else if (vertical) x++;
            else if (diagonal) {
                x++;
                y++;
            }
        } else return false;
    }
    if (word == str) return true;
    else return false;
}

void is_position (Matrix& a, string str, int n, int m, bool horizontal, bool vertical, bool diagonal) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    int v_size = str.size();
    int x = n;
    int y = m;
    
    for (int k = 0; k < v_size and x < nrows and y < ncolumns; k++) {
        if ('Z' < a[x][y]) a[x][y] = str[k] - ('a' - 'A');
        if (horizontal) y++;
        else if (vertical) x++;
        else if (diagonal) {
            x++;
            y++;
        }
    }
}

void search_word(Matrix& a, vector<string> S) {
    int nrows = a.size();
    int ncolumns = a[0].size();
    int v_size = S.size();
    for (int k = 0; k < v_size; k++) {
        string str = S[k];
        for (int i = 0; i < nrows; i++) {
            for (int j = 0; j < ncolumns; j++) {
                char c = str[0] - ('a' - 'A');
                if (str[0] == a[i][j] or c == a[i][j]) {
                    if (position(a, str, i, j + 1, true, false, false)) is_position(a, str, i, j, true, false, false);
                    if (position(a, str, i + 1, j, false, true, false)) is_position(a, str, i, j, false, true, false);
                    if (position(a, str, i + 1, j + 1, false, false, true)) is_position(a, str, i, j, false, false, true);
                }
            }
        }
    }
}
 
int main() {
    int x, n, m;
    bool first = true;
    while (cin >> x >> n >> m) {
        vector<string> S(x);
        for (int i = 0; i < x; i++) cin >> S[i];
        
        Matrix a(n, vector<char>(m));
        write_matrix(a);
        
        search_word(a, S);
        
        if (not first) cout << endl;
        else first = false;
        read_matrix(a);
    }
}

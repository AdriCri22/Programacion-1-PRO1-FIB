#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<char> > Matrix;

void write_matrix(Matrix& m) {
    int rows = m.size();
    int columns = m[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cin >> m[i][j];
    }
}

void read_matrix(Matrix m) {
    int rows = m.size();
    int columns = m[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cout << m[i][j];
        cout << endl;
    }
}

Matrix bact(Matrix m) {
    int rows = m.size();
    int columns = m[0].size();
    char c = 'B';
    Matrix M(rows, vector<char>(columns));
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < columns; j++) {
            int sum = 0;
            if (0 <= i - 1 and 0 <= j - 1) 
                if (m[i - 1][j - 1] == c) sum++;
            if (0 <= i - 1)
                if (m[i - 1][j] == c) sum++;
            if (0 <= j - 1)
                if (m[i][j - 1] == c) sum++;
            if (0 <= i - 1 and j + 1 < columns)
                if (m[i - 1][j + 1] == c) sum++;
            if (i + 1 < rows and 0 <= j - 1)
                if (m[i + 1][j - 1] == c) sum++;
            if (j + 1 < columns)
                if (m[i][j + 1] == c) sum++;
            if (i + 1 < rows)
                if (m[i + 1][j] == c) sum++;
            if (i + 1 < rows and j + 1 < columns)
                if (m[i + 1][j + 1] == c) sum++;
                
            if (m[i][j] == c) {
                if (sum == 2 or sum == 3) M[i][j] = 'B';
                else M[i][j] = '.';
            } else if (m[i][j] == '.') {
                if (sum == 3) M[i][j] = 'B';
                else M[i][j] = '.';
            }
        }
        
    }
    return M;
}

int main () {
    int n, m;
    bool first = true;
    while (cin >> n >> m) {
        if (0 < n and 0 < m) {
            if (first) first = false;
            else cout << endl;
            Matrix M(n, vector<char>(m));
            write_matrix(M);
            Matrix R = bact(M);
            read_matrix(R);
        }
    }
}

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void write_matrix(Matrix& m, int r, int c) {
    for (int row = 0; row < r; row++)
        for (int column = 0; column < c; column++) 
            cin >> m[row][column];
}

void read_matrix(Matrix& m, int r, int c) {
    for (int row = 0; row < r; row++) {
        bool first = false;
        for (int column = 0; column < c; column++) {
            if (not first) {
                cout << m[row][column];
                first = true;
            } else cout << " " << m[row][column];
        }
        cout << endl;
    }
}

void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void transpose(Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k  < n; k++) swap(m[i][k], m[k][i]);
    }
}

int main() {
    int r, c;
    
    cin >> r >> c;
    
    Matrix m(r, vector<int>(c));
    
    write_matrix(m, r, c);
    transpose(m);
    read_matrix(m, r , c);
}

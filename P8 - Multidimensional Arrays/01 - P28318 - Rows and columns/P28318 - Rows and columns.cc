#include <iostream>
#include <vector>
using namespace std;

void write_matrix(vector< vector<int> >& matrix, int r, int c) {
    for (int row = 0; row < r; row++)
        for (int column = 0; column < c; column++) 
            cin >> matrix[row][column];
}

void read_matrix(vector< vector<int> > matrix, int r, int c) {
    string str;
    int num1, num2;
    while (cin >> str >> num1) {
        cout << str << " " << num1;
        if (str == "row") {
            cout << ":";
            for (int i = 0; i < c; i++) cout << " " << matrix[num1 - 1][i];
        } else if (str == "column") {
            cout << ":";
            for (int i = 0; i < r; i++) cout << " " << matrix[i][num1 - 1];
        } else if (str == "element") {
            cin >> num2;
            cout << " " << num2 << ": ";
            cout << matrix[num1 - 1][num2 - 1];
        }
        cout << endl;
    }
}

int main() {
    int r, c;
    
    cin >> r >> c;
    
    vector< vector<int> > matrix(r, vector<int>(c));
    
    write_matrix(matrix, r, c);
    read_matrix(matrix, r, c);
}

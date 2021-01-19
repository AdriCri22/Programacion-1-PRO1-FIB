#include <vector>
#include <iostream>
using namespace std;

int first_one(const vector< vector<int> >& t) {
    int result = 0;
    int size = t.size();
    for (int i = 0; i < size; i++) result += t[i][0];
    return result;
}

bool horizontal(const vector< vector<int> >& t, int comp) {
    int size = t.size();
    for (int i = 0; i < size; i++) {
        int result = 0;
        for (int j = 0; j < size; j++) {
            result += t[i][j];
        }
        if (comp != result) return false;
    }
    return true;
}

bool vertical(const vector< vector<int> >& t, int comp) {
    int size = t.size();
    for (int i = 0; i < size; i++) {
        int result = 0;
        for (int j = 0; j < size; j++) {
            result += t[j][i];
        }
        if (comp != result) return false;
    }
    return true;
}

bool diagnal_1(const vector< vector<int> >& t, int comp) {
    int size = t.size();
    int sum = 0, i = 0, j = 0;
    while (i < size and j < size) {
        sum += t[i][j];
        j++;
        i++;
    }
    if (comp != sum) return false;
    else return true;
}

bool diagnal_2(const vector< vector<int> >& t, int comp) {
    int size = t.size();
    int sum = 0, i = 0, j = size - 1;
    while (i < size and 0 <= j) {
        sum += t[i][j];
        j--;
        i++;
    }
    if (comp != sum) return false;
    else return true;
}

bool arrangement(const vector< vector<int> >& t) {
    int size = t.size();
    for (int k = 1; k <= size * size; k++) {
        bool found = false;
        for (int i = 0; i < size and not found; i++) {
            for (int j = 0; j < size and not found; j++) {
                if (not found and t[i][j] == k) found = true;
            }
        }
        if (not found) return false;
    }
    return true;
}

bool magic_square(const vector< vector<int> >& t) {
    int comp = first_one(t);
    
    if (horizontal(t, comp) and vertical(t, comp) and diagnal_1(t, comp) and diagnal_2(t, comp) and arrangement(t)) return true;
    else return false;
}


int main () {
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }   
        }
        cout << magic_square(M) << endl;
    }   
}

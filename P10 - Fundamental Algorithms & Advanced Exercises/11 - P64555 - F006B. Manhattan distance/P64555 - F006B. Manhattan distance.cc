#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Coordinates {
    int x, y, d;
};

vector<Coordinates> read_coord(int n) {
    vector<Coordinates> v(n);
    for (int i = 0; i < n; i++) {
        Coordinates c;
        cin >> c.x >> c.y;
        v[i] = c;
    }
    return v;
}

int abs_val(int x) {
    if (x < 0) return x * -1;
    else return x;
}

void get_distance(vector<Coordinates>& v, int x, int y) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        Coordinates c = v[i];
        c.d = abs_val(c.x - x) + abs_val(c.y - y);
        v[i] = c;
    }
}

void print_coord(vector<Coordinates> v) {
    int size = v.size();
    int d = -1;
    for (int i = 0; i < size; i++) {
        Coordinates c = v[i];
        if (c.d != d) cout << "points at distance " << c.d << endl;
        d = c.d;
        cout << c.x << " " << c.y << endl;
    }
}

bool comp(Coordinates a, Coordinates b) {
    if (a.d != b.d) return a.d < b.d;
    else if (a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

int main() {
    int x, y;
    cin >> x >> y;
    
    int n;
    cin >> n;
    
    vector<Coordinates> v = read_coord(n);
    
    get_distance(v, x, y);
    sort(v.begin(), v.end(), comp);
    
    print_coord(v);
}

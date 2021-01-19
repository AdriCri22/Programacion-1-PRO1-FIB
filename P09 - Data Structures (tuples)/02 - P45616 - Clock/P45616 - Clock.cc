#include <iostream>
#include <cmath>
using namespace std;

struct Clock {
    int h;      // hours (0<=h<24)
    int m;      // minutes (0<=m<60)
    int s;      // seconds (0<=s<60)
};

Clock midnight() {
    Clock r;
    r.s = 0;
    r.m = 0;
    r.h = 0;
    return r;
}

void increase(Clock& r) {
    r.s += 1;
    if (r.s == 60) {
        r.s = 0;
        r.m += 1;
        if (r.m == 60) {
            r.m = 0;
            r.h += 1;
            if (r.h == 24) r.h = 0;
        }
    }
}

void print(const Clock& r) {
    if (r.h < 10) cout << "0" << r.h << ":";
    else cout << r.h << ":";
    if (r.m < 10) cout << "0" << r.m << ":";
    else cout << r.m << ":";
    if (r.s < 10) cout << "0" << r.s << endl;
    else cout << r.s << endl;
}

int main() {
    
}

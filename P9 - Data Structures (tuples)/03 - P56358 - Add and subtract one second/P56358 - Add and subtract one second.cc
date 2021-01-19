#include <iostream>
#include <cmath>
using namespace std;

struct Time {
    int hour, minute, second;
};

void add_second(Time& t) {
    t.second++;
    if (t.second == 60) {
        t.second = 0;
        t.minute++;
        if (t.minute == 60) {
            t.minute = 0;
            t.hour++;
            if (t.hour == 24) t.hour = 0;
        }
    }
}

void rest_second(Time& t) {
    t.second--;
    if (t.second == -1) {
        t.second = 59;
        t.minute--;
        if (t.minute == -1) {
            t.minute = 59;
            t.hour--;
            if (t.hour == -1) t.hour = 23;
        }
    }
}

void one_second(const Time& t, Time& t1, Time& t2) {
    t1 = t;
    t2 = t;
    add_second(t1);
    rest_second(t2);
}

int main() {
    Time t, t1, t2;
    while (cin >> t.hour >> t.minute >> t.second) {
        one_second(t, t1, t2);
        cout << t1.hour << " " << t1.minute << " " << t1.second << endl;
        cout << t2.hour << " " << t2.minute << " " << t2.second << endl;
    } 
}

#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if (year % 4 == 0 and year % 100 != 0) {
        return true;
    } else if (year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

bool is_valid_date(int d, int m, int y) {
    if (m == 1 and 0 < d and d <= 31) {
        return true;
    } if (m == 2 and 0 < d and d <= 29) {
        if (d <= 28) {
            return true;
        } else {
            if (is_leap_year(y) == true) return true;
            else return false;
        }
    } if (m == 3 and 0 < d and d <= 31) {
        return true;
    } if (m == 4 and 0 < d and d <= 30) {
        return true;
    } if (m == 5 and 0 < d and d <= 31) {
        return true;
    } if (m == 6 and 0 < d and d <= 30) {
        return true;
    } if (m == 7 and 0 < d and d <= 31) {
        return true;
    } if (m == 8 and 0 < d and d <= 31) {
        return true;
    } if (m == 9 and 0 < d and d <= 30) {
        return true;
    } if (m == 10 and 0 < d and d <= 31) {
        return true;
    } if (m == 11 and 0 < d and d <= 30) {
        return true;
    } if (m == 12 and 0 < d and d <= 31) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int d, m, y;
    while (cin >> d >> m >> y) {
        cout << is_valid_date(d, m, y) << endl;
    }   
    
}

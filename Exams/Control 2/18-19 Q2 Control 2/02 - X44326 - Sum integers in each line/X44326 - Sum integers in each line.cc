#include <iostream>
using namespace std;

void sum_char(char c, int& sum, int& last_num) {
    if (c == '0') last_num = last_num * 10 + 0;
    else if (c == '1') last_num = last_num * 10 + 1;
    else if (c == '2') last_num = last_num * 10 + 2;
    else if (c == '3') last_num = last_num * 10 + 3;
    else if (c == '4') last_num = last_num * 10 + 4;
    else if (c == '5') last_num = last_num * 10 + 5;
    else if (c == '6') last_num = last_num * 10 + 6;
    else if (c == '7') last_num = last_num * 10 + 7;
    else if (c == '8') last_num = last_num * 10 + 8;
    else if (c == '9') last_num = last_num * 10 + 9;
    else {
        sum += last_num;
        last_num = 0;
    }
}

int main(){
    char c;
    int sum = 0, last_char = 0;
    
    while (cin >> c) {
        if (c != '.') {
            sum_char(c, sum, last_char);
        } else {
            sum_char(c, sum, last_char);
            cout << sum << endl;
            sum = 0;
            last_char = 0;
        }
    }
}

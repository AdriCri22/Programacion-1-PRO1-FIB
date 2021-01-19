#include <iostream>
using namespace std;

int sum_digits(int n) {
        int sum = 0;
        while (n != 0) {
                sum += n % 10;
                n /= 10;
        }
        return sum;
}
 
 
int encounter_of_rivers(int n) {
        int river_1 = 1;
        int river_3 = 3;
        int river_9 = 9;
        while (river_1 != n && river_3 != n && river_9 != n) {
                while (river_1 < n) river_1 += sum_digits(river_1);
                while (river_3 < n) river_3 += sum_digits(river_3);
                while (river_9 < n) river_9 += sum_digits(river_9);
                if (river_1 != n && river_3 != n && river_9 != n) n += sum_digits(n);
        }
        return n;
}


int main () {
    int n;
    
    while (cin >> n) {
        cout << n << " " << encounter_of_rivers(n) << endl;
    }
}

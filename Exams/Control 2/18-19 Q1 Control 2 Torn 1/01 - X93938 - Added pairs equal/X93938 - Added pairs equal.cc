#include <iostream>
using namespace std;

bool pairwise_sum(int x, int y) {
    if (x == 0) return true;
    else {
        int number_1 = x % 10;
        int number_2 = (x / 10) % 10;
        if (number_1 + number_2 != y) return false;
        else return pairwise_sum(x / 100, y);
    }
}

int main(){
    int x, y;
    
    while (cin >> x >> y) {
        if (pairwise_sum(x, y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

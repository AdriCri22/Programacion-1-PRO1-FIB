#include <iostream>
using namespace std;

bool triplet_number(int n){
    if (n == 0) return true;
    int number_1 = n % 10;
    int number_2 = (n / 10) % 10;
    int number_3 = (n / 100) % 10;
    if (number_1 == number_2 and number_2 == number_3) return triplet_number(n / 1000);
    else return false;
}

int main(){
    int n;
    while (cin >> n){
        if (triplet_number(n)) cout << "TRUE" << endl;
        else cout << "FALSE" << endl;
    }
}

#include <iostream>
using namespace std;

int number_of_digits(int n) {
    if (n == 0) return 1;
    else if (n / 10 == 0) return number_of_digits(n / 10); 
    else return 1 + number_of_digits(n / 10);
}

int main() {
    int n;
    cin >> n;
    
    cout << number_of_digits(n) << endl;
}

#include <iostream>
using namespace std;

int main() {
    int num_1, num_2, num_3;
    cin >> num_1 >> num_2 >> num_3;
    
    if (num_2 < num_1 && num_3 < num_1) {
        cout << num_1;
    } else if (num_1 < num_2 && num_3 < num_2) {
        cout << num_2;
    } else if (num_1 < num_3 && num_2 < num_3) {
        cout << num_3;
    } else if (num_1 == num_2) {
        if (num_3 < num_1) {
            cout << num_1;
        } else if (num_1 < num_3) {
            cout << num_3;
        } else if (num_1 == num_3) {
            cout << num_1;
        }
    } else if (num_1 == num_3) {
        if (num_2 < num_1) {
            cout << num_1;
        } else if (num_1 < num_2) {
            cout << num_2;
        }
    } else if (num_3 == num_2) {
        if (num_3 < num_1) {
            cout << num_1;
        } else if (num_1 < num_3) {
            cout << num_3;
        }
    }
    cout << endl;
}

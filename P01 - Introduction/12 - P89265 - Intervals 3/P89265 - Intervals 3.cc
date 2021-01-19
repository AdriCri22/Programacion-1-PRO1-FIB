#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
	if (a1 <= b1 && a2 <= b2) {
		if (a1 == a2 && b1 == b2) {
			cout << "= , ";
		}
		else if (a2 <= a1 && a1 < b2 && b1 <= b2) {
			cout << "1 , ";
		}
		else if (a1 == b1 && (a1 == a2 || a1 == b2)) {
			cout << "1 , ";
		}
		else if (a1 <= a2 && a2 < b1 && b2 <= b1) {
			cout << "2 , ";
		}
		else if (a2 == b2 && (a2 == a1 || a2 == b1)) {
			cout << "2 , ";
		}
		else {
			cout << "? , ";
		}
	}
    
	if (a1 <= b1 && a2 <= b2) {
		if (a1 <= a2 && a2 <= b1) {
			cout << "[" << a2;
		}
		else if (a2 <= a1 && a1 <= b2) {
			cout << "[" << a1;
		}
		else {
			cout << "[";
		}

		if (a2 <= b1 && b1 <= b2) {
			cout << "," << b1 << "]";
		}
		else if (a1 <= b2 && b2 <= b1) {
			cout << "," << b2 << "]";
		}
		else {
			cout << "]";
		}
	}
	else {
		cout << "[]";
	}
    
    cout << endl;
}

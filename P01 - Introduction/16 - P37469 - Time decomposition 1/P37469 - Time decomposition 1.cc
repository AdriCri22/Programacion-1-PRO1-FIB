#include <iostream>
using namespace std;

int main() {
    int v;
    cin >> v;
    
    int h = v / 3600;
    int h_r = v % 3600;
    
    int m = h_r / 60;
    
    int s = h_r % 60;
    
    cout << h << " " << m << " " << s << endl;
}

#include <iostream>
using namespace std;

int main() {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    
    s = s + (m * 60) + (h * 3600) + (d * 24 * 3600) + (y * 365 * 24 * 3600); 
    
	cout << s << endl;
}

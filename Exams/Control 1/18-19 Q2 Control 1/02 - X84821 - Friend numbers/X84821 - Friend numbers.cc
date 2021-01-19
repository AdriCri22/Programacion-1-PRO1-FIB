#include <iostream>
using namespace std;

int abundance(int);

int main() {
   int x,y;
   
   while (cin >> x >> y) {
        int ax = abundance(x);
        int ay = abundance(y);
        
        if (ax == ay and ax != 0 and ay != 0) cout << ax << " " << ay << " friends" << endl;
        if (ax != ay or ax == 0 and ay == 0) cout << ax << " " << ay << " not friends" << endl;
   }
}

int abundance(int a) {
    int sum = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) sum += i;
    }
    sum -= a;
    
    if (sum < 0) sum = 0; 
    
    return sum;
}

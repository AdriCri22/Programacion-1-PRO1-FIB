#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;
    if (a != 0 && b != 0) {
        int s = 0;
        
        for (int i = a; i <= b; i++) { 
                    s += i * i * i;
        }
        
        cout << "suma dels cubs entre " << a << " i " << b << ": " << s;
        
        
        while (cin >> a >> b) {
            int sum = 0;
            
            for (int i = a; i <= b; i++) { 
                    sum += i * i * i;
            }
            
            cout << "\nsuma dels cubs entre " << a << " i " << b << ": " << sum;
        }
    

        cout << endl;
    }
}

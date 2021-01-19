#include <iostream>
#include <vector>
using namespace std;
 
bool mateixos_digits (int x, int y, int b ){
    vector<int> S(b, 0);
    int xy= x * y;
    while(xy != 0){
        if (x != 0) S[x % b]++;
        if (y != 0) S[y % b]++;
        
        S[xy % b]--;
        x /= b;
        y /= b;
        xy /= b;
    }

    for (int i = 0; i < S.size(); i++){
        if(S[i] != 0) return false;
    }
    return true;
}
 
   
void bases(int number, int base){
    if(number != 0){
        bases(number / base, base);
        if (number % base < 10) cout << number % base;
        else cout << char((number % base) - 10 + 'A');
    }
}
 
 
 
int main(){
    int x,y;
    
    while (cin >> x >> y){
        int base = 2;
        
        bool first = false;
        
        cout << "solutions for " << x << " and " << y;
        
        while(base <= 16){
            bool resultat = mateixos_digits(x, y, base);
            if (resultat) {
                if (not first) cout << endl;
                bases(x, base);
                cout << " * ";
                bases(y, base);
                cout << " = ";
                bases(x * y, base);
                cout << " (base " << base << ')' << endl;
                first = true;
            }
        base++;
        }
        
        if (not first) {
            cout << endl << "none of them" << endl;
        }
        cout << endl;
    }
}

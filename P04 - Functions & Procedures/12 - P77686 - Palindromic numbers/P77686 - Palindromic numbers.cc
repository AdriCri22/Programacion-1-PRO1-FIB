#include <iostream>
using namespace std;


bool is_palindromic(int n) {
    if (n < 10) {
        return true;
    } else {
        int count = 0;
        int count_n = n;
        while (count_n != 0) {
            count++;
            count_n /= 10;
        }
        
        int primera_part = n;
        int segona_part = n;
        int residu = 0;
        
        if (count % 2 == 0) {
            for (int i = 0; i < (count / 2); i++){
                primera_part /=  10;
                
                residu = 10 * residu + segona_part % 10;
                
                segona_part /= 10; 
            }
        } else {
            primera_part /=  10;
            for (int i = 0; i < ((count / 2)); i++){
                primera_part /=  10;
                
                residu = 10 * residu + segona_part % 10;
                
                segona_part /= 10; 
            }
        }
        
        if (primera_part == residu) return true;
        else return false;        
    }
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}

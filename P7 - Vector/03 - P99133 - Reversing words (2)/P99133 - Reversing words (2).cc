#include <iostream>
#include <vector>
using namespace std;

//Cambia orden de letras
void reverse_char(string str) {
    for (int k = str.length() - 1; 0 <= k; k--) {
        cout << str[k];             //Se usa el string como un vector
    }
}

//Cambia el orden de las palabras
void reverse_words(vector<string> S) {
    for (int i = S.size() - 1; 0 <= i; i--) {
        string str = S[i];          //Toma el valor de cada posición del vector
        reverse_char(str);
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<string> S(n);
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        S[i] = str;
    }
    
    reverse_words(S);
}

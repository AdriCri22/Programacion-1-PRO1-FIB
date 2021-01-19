#include <iostream>
#include <vector>
using namespace std;

//Pre: n números entre 1000000000 y 1000001000

//Función que toma el vector C y cumpreba los valores por los cuales C es diferente a cero, si es diferente a cero mira la posición a la que está y se la suma a 1.000.000.000 y meuestra cuantas veces ha salido en la secuencia.
void show(vector<int> C) {
    for (int i = 0; i < C.size(); i++) {
        if (C[i] != 0) {
            cout << 1000000000 + i << " : " << C[i] << endl;
        }
    }
}

//Función que hace de contador de frecuencias
void counter(vector<int> S) {
    vector<int> C(1001);
    for (int i = 0; i < S.size(); i++) {
        int m = S[i] % 10000;           //divide por 10.000 en vez de 1.000 para distinguir cuando el valor es 1.000 o 0 
        C[m]++;                         //Suma 1 al contador en la posición encontrada en m
    }
    show(C);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    counter(S);
}

#include <iostream>
#include <vector>
using namespace std;

//Mira el caracter más frecuente de las palabras con la longitud mayor que la media
char most_frequent_letter(const string& s) {
    int max = 0;
    char c = 0;
    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        for (int k = 0; k < s.length(); k++) {
            if (s[i] == s[k]) count++;
        }
        if (max < count) {
            c = s[i];
            max = count;
        } else if (max == count) {      //Si el maximo contador es igual al contador actual
            if (s[i] < c) {             //Mirar si el carácter de este contador es menor que el del maximo
                c = s[i];
                max = count;
            }
        }
    }
    return c;
}

//Mira que palabras tienen una longitud mayor que la media
void words_with_average_length(vector<string> S, double average) {
    for (int i = 0; i < S.size(); i++) {
        string str = S[i]; 
        if (average <= str.length()) cout << str << ": " << most_frequent_letter(S[i]) << endl;
    }
}

//Hace la media de la lonfitud de las palabras
void average_words(vector<string> S) {
    cout.setf(ios::fixed);
    cout.precision(2);
    double sum = 0;
    for (int i = 0; i < S.size(); i++) {
        string str = S[i]; 
        sum += str.length();
    }
    cout << sum / S.size() << endl;
    words_with_average_length(S, sum / S.size());
}

int main() {
    int n;
    
    cin >> n;
        
    vector<string> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    average_words(S);
}

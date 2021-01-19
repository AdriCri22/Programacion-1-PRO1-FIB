#include <iostream>
#include <vector>
using namespace std;

bool keys_parenthesis(string str) {
    int size = str.size();
    vector<char> v(size, '0');
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] == '(' or str[i] == '[') {
            v[j] = str[i];
            j++;
        } else if (str[i] == ')' or str[i] == ']') {
            j--;
            if ((str[i] == ')' and v[j] != '(') or (str[i] == ']' and v[j] != '[')) return false;
        }
    }        
        
    if (j == 0) return true;
    else return false;
}

int main() {
    string str;
    
    while (cin >> str) {        
        if (keys_parenthesis(str)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

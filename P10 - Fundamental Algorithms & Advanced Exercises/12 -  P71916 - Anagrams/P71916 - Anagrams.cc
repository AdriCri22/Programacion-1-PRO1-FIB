#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count_words(string str) {
    int sum = 0;
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] and str[i] <= 'Z') sum += str[i];
    }
    return sum;
}

string anagram(string str1, string str2) {
    int s1 = count_words(str1);
    int s2 = count_words(str2);
    if (s1 == s2) return "YES";
    else return "NO";
}

string sentence() {
    string str;
    char c;
    while (cin >> c and c != '.') str += c;
    return str;
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string str1 = sentence();
        string str2 = sentence();
        cout << anagram(str1, str2) << endl;
    }
}

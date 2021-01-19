#include <iostream>
using namespace std;

void order(string str, bool& catboy, bool& owlette, bool& gekko) {
    if (not catboy or not owlette or not gekko) {
        cin >> str;
        if (str == "Catboy" and not catboy) {
            cout << "Catboy" << endl;
            catboy = true;
        } else if (str == "Owlette" and not owlette) {
            cout << "Owlette" << endl;
            owlette = true;
        } else if (str == "Gekko" and not gekko) {
            cout << "Gekko" << endl;
            gekko = true;
        }
        order(str, catboy, owlette, gekko);
    }
}

int main() {
    string str;
    bool catboy = false, owlette = false, gekko = false;
    
    order(str, catboy, owlette, gekko);
}

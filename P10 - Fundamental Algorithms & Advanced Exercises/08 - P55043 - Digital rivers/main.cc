#include <iostream>
using namespace std;


int encounter_of_rivers (int n) ;


int main ()
{
    int n;
    while (cin >> n) {
        cout << n << " " << encounter_of_rivers(n) << endl;
    }
}

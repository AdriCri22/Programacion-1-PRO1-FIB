#include <typeinfo>
#include <iostream>
using namespace std;


Rational rational(int n, int d);


int main() {

  { // Vigilem el tipus Racional.

    struct Racional_control {
      int num, den;
    };

    Rational r;
    Racional_control rc;

    // Diagn�stics en temps de compilaci�.
    r.num = rc.num;
    r.den = rc.den;

    // Diagn�stics en temps d'execuci�.
    if (sizeof(r) != sizeof(rc)) throw string("Sembla que 'Racional' no est� ben definit");
    if (typeid(r.num) != typeid(rc.num)) throw string("Sembla que 'Racional.num' no est� ben definit");
    if (typeid(r.den) != typeid(rc.den)) throw string("Sembla que 'Racional.den' no est� ben definit");
  }

  int num, den;
  while (cin >> num >> den) {
    Rational r = rational(num, den);
    cout << r.num << " " << r.den << endl;
  }
}

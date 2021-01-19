#include <typeinfo>
#include <iostream>
using namespace std;

/*
struct Punt {
    double x, y;
};*/


double dist(const Point& a, const Point& b);


int main() {

  {   // vigilar el tipus Punt

        struct Punt_cntrl {
            double x, y;
        };

        Point ru;
        Punt_cntrl rc;

        // diagn�stics en temps de compilaci�  
        ru.x = rc.x;  
        ru.y = rc.y;  

        // diagn�stics en temps d'execuci�
        if (sizeof(ru)!=sizeof(rc))     throw string("It seems that 'Point' is not well defined");
        if (typeid(ru.x)!=typeid(rc.x)) throw string("It seems that 'Point.x' is not well defined");
        if (typeid(ru.y)!=typeid(rc.y)) throw string("It seems that 'Point.y' is not well defined");
  }


  cout.setf(ios::fixed);
  cout.precision(6);

  double x1, y1, x2, y2;
  while (cin >> x1 >> y1 >> x2 >> y2) {
    Point a, b;
    a.x = x1;
    a.y = y1;
    b.x = x2;
    b.y = y2;
    cout << dist(a, b) << endl;
  }
}

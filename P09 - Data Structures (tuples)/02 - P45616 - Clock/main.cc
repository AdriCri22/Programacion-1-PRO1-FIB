#include <typeinfo>
#include <iostream>
using namespace std;


Clock midnight();
void increase(Clock& r);
void print(const Clock& r);


int main () 
{
    Clock r = midnight();
    for (int i=0; i<=25*60*60; ++i) {
        print(r);
        increase(r);
    }
    return 0;
}

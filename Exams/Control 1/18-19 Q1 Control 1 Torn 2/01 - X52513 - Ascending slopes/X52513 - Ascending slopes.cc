#include <iostream>
using namespace std;

int main() {
   char c, h, a;
   
   cin >> c >> h >> a;
   
   if (c == '-' and h == '-' and a == '-') cout << "wrong" << endl;
   if (c == '-' and h == '/' and a == '-') cout << "wrong" << endl;
   if (c == '/' and h == '-' and a == '/') cout << "wrong" << endl;
   if (c == '-' and h == '-' and a == '/') cout << "right" << endl;
   if (c == '-' and h == '/' and a == '/') cout << "right" << endl;
   if (c == '/' and h == '/' and a == '/') cout << "right" << endl;
}

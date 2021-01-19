#include <iostream>
using namespace std;

int main() {
   string person_1, person_2;
   char a, b;
   int count_p1 = 0, count_p2 = 0, count_ties = 0;
   
   cin >> person_1 >> person_2;
   
   while (cin >> a >> b) {
        if (a == 'P' and b == 'P') count_ties++;
        if (a == 'T' and b == 'T') count_ties++;
        if (a == 'R' and b == 'R') count_ties++;
        if (a == 'P' and b == 'R') count_p1++;
        if (a == 'R' and b == 'T') count_p1++;
        if (a == 'T' and b == 'P') count_p1++;
        if (a == 'R' and b == 'P') count_p2++;
        if (a == 'T' and b == 'R') count_p2++;
        if (a == 'P' and b == 'T') count_p2++;
   }
   int total = count_p1 + count_p2 + count_ties;
   cout << person_1 << " " << count_p1 << endl << person_2 << " " << count_p2 << endl << "Ties " << count_ties << endl << "Total " << total << endl;
}

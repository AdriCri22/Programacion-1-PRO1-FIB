#include <iostream>
#include <vector>
using namespace std;


vector<double> difference(const vector<double> & V1, const vector<double> & V2);


int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = difference(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = difference(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
}

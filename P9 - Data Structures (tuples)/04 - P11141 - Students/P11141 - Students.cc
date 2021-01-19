#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    int n = stu.size();
    int count = 0;
    min = 10;
    max = 0;
    avg = 0;
    for (int i = 0; i < n; i++) {
        if (not stu[i].repeater and stu[i].mark != -1) {
            if (stu[i].mark < min) min = stu[i].mark;
            if (max < stu[i].mark) max = stu[i].mark;
            avg += stu[i].mark;
            count++;
        }
    }
    if (count != 0) avg = avg / count;
    else {
        avg = -1;
        min = -1;
        max = -1;
    }
}

int main() {
    /*Student s;
    vector<Student> st;
    while (cin >> s.idn >> s.name >> s.mark >> s.repeater) {
        st.push_back(s);
    }
    
    double min = 0;
    double max = 0;
    double avg = 0;
    information(st, min, max, avg);
    
    cout << min << " " << max << " " << avg << endl;
*/}

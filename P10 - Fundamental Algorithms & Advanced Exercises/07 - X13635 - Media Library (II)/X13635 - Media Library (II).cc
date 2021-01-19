#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
    string artist, title, genre;
    int year;
};

bool comp(const Track &a, const Track &b) {
    if (a.genre < b.genre) return true;
    else if (b.genre < a.genre) return false;
    else { 
        if (a.artist < b.artist) return true;
        else if (b.artist < a.artist) return false;
        else {
            if (a.year < b.year) return true;
            else if (b.year < a.year) return false;
            else {
                if (a.title < b.title) return true;
                else if (b.title < a.title) return false;
            }
        }
    }
    return true;
}

vector<Track> read_tracks(int n) {
    vector<Track> v(n);
    for (int i = 0; i < n; i++) {
        Track t;
        cin >> t.artist >> t.title >> t.genre >> t.year;
        v[i] = t;
    }
    return v;
}

void print_track(const Track &t) {
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<Track> v = read_tracks(n);
    int v_size = v.size();
    for (int i = 0; i < v_size; i++) {
        for (int j = i + 1; j < v_size; j++) {
            Track a = v[i];
            Track b = v[j];
            if (not comp(a, b)) {
                v[i] = b;
                v[j] = a;
            }
        }
    }
    
    string genre;
    vector<Track> vt;
    while (cin >> genre and genre != ".") {
        for (int i = 0; i < n; i++) {
            Track t = v[i];
            if (t.genre == genre) print_track(t);
        }
    }
}

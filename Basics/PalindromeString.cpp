#include <iostream>
using namespace std;

bool pal(int i, string &s) {
    if (i >= s.size()/2) return true;              // base case
    if (s[i] != s[s.size()-i-1]) return false;     
    return pal(i+1, s);                            // recursive step
}

int main() {
    string s;
    cin >> s;
    cout <<( pal(0, s) ? "Yes" : "No")  << " ";
    return 0;
}
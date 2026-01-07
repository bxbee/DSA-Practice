#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Frequency array for all ASCII characters
    int hash[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;   // cast to unsigned char for safety
    }

    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }

    return 0;
}
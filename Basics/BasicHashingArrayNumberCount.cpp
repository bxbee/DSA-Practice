#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];   // assume max size 100 for demo
    for (int i = 0; i < n; i++) cin >> arr[i];

    int hash[1000] = {0};  // assume input numbers are in range [0,999]

    // count frequency
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int T;
    cin >> T;
    while (T--) {
        int number;
        cin >> number;
        cout << hash[number] << " ";
    }
    return 0;
}
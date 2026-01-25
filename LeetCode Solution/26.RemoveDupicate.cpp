#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];


    //From here------------------------------------------------------------------>

    if (arr.empty()) return 0;
    int j = 0;                                     // Leetcode Array Problem 26
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            arr[++j] = arr[i];
        }
    }
    //<----------------------------------------------------------------------here

    // Print only the unique elements
    for (int i = 0; i <= j; i++) cout << arr[i] << " ";

    return 0;
}
#include <iostream>
using namespace std;

void rev(int l, int arr[], int r) {
    if (l >= r/2) return;  // stop when left crosses halfway
    swap(arr[l], arr[r - 1 - l]); // swap left with right
    rev(l + 1, arr, r); // move inward
}

int main() {
    int T;
    cin >> T;
    int arr[1000]; // assuming max size 1000
    for (int i = 0; i < T; i++) cin >> arr[i];

    rev(0, arr, T);

    for (int i = 0; i < T; i++) cout << arr[i] << " ";
    return 0;
}
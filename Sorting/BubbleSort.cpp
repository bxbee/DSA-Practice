#include <iostream>
#include <vector>
using namespace std;

void Bubble_Sort(vector<int> &arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;  // Input size of array
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input elements
    }

    Bubble_Sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Output sorted array
    }

    return 0;
}
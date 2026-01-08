#include <iostream>
#include <vector>
using namespace std;

// Function to perform Insertion Sort
void insertion_Sort(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        // Shift elements until the correct position is found
        while (j > 0 && arr[j - 1] > arr[j]) {
            // Swap arr[j] and arr[j-1]
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
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

    insertion_Sort(arr, n);  // Sort the array

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
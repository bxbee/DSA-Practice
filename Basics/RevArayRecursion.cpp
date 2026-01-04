#include <iostream>
#include <vector>
using namespace std;

// Recursive function to reverse the array
void revArray(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return; // Base case
    }
    // Swap elements at start and end
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call for the next pair
    revArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array using recursion
    revArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
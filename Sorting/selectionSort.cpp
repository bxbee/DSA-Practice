//Code for Selection Sort 
#include <iostream>
#include <vector>
using namespace std;

// Function to perform selection sort
void selection_sort(vector<int> &arr, int n) {
    for (int i = 0; i <= n - 2; i++) {
        int minIndex = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void print_array(const vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);
    print_array(arr, n);

    return 0;
}

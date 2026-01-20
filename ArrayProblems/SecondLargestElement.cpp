#include <iostream>
#include <vector>
#include <climits>   // For INT_MIN
using namespace std;

int main() {
    int n;
    cin >> n;   // Input size of the array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // Input elements
    }

    // Initialize largest as the first element
    int largest = arr[0];
    // Initialize second largest as INT_MIN (safe baseline)
    int slargest = INT_MIN;

    // Traverse the array once
    for (int i = 0; i < n; i++) {
        // Case 1: Found a new largest element
        if (arr[i] > largest) {
            slargest = largest;   // Previous largest becomes second largest
            largest = arr[i];     // Update largest
        }
        // Case 2: Element is smaller than largest but greater than current second largest
        else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];    // Update second largest
        }
    }
    cout<<slargest<<" ";

    

    return 0;
}

#include <iostream>   // for input/output operations (cin, cout)
#include <vector>     // for using the vector container
using namespace std;

bool Rotated_sorted(vector<int> &arr) {
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        // Condition explanation:
        // arr[i] is the current element.
        // (i + 1) % n gives the index of the next element,
        // and wraps back to 0 when i = n-1 (last element).
        // So arr[(i+1)%n] is the "next" element in a circular sense.
        //
        // If arr[i] > arr[(i+1)%n], it means the ascending order
        // is broken at this point. Example:
        // For arr = [3, 4, 5, 1, 2]:
        // when i=2 -> arr[2]=5, arr[(2+1)%5]=arr[3]=1
        // 5 > 1 → order break detected.
        if (arr[i] > arr[(i + 1) % n]) {
            count++;  // count how many times the order breaks
        }
    }
    return count <= 1;  // at most one break allowed → rotated sorted
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << (Rotated_sorted(arr) ? "Yes" : "No");
    return 0;
}
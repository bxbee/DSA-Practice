#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    int val;
    cin >> val;
//From here to ---------------------------------------------------------------------->
    int index = 0;
    for (int i = 0; i < n; i++) {                   //LeetCode problem 27 
        if (arr[i] != val) {
            arr[index++] = arr[i];
        }
    }
   //Return array here-------------------------------------------------------------
    // Print only the valid elements
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
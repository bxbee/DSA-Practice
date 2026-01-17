#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    // Print original array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Left rotate by one
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    // Print rotated array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

/*  
Inputs :
5
1 2 3 4 5
*/

/*
Output:
1 2 3 4 5 
2 3 4 5 1 

*/
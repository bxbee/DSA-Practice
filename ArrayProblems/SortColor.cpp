#include <iostream>
#include <vector>
using namespace std;

void sortColor(vector<int>& arr) {
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;

    // Count occurrences
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }

    // Rewrite array
    int indx = 0;
    while(count0--) arr[indx++] = 0;
    while(count1--) arr[indx++] = 1;
    while(count2--) arr[indx++] = 2;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sortColor(arr);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

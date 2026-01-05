#include <iostream>
#include <vector>
using namespace std;

void rev(int l, vector<int>& arr, int r) {
    if (l >= r) return;
    swap(arr[l], arr[r]);
    rev(l + 1, arr, r - 1);
}

int main() {
    int T;
    cin >> T;
    vector<int> arr(T);
    
    for (int i = 0; i < T; i++) {
        cin >> arr[i];
    }
    
    rev(0, arr, T - 1);
    
    for (int i = 0; i < T; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
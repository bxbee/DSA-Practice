#include <iostream>
#include <vector>
using namespace std;

vector<int> sq_Array_Sorted(vector<int> &arr) {
    //From here --------------------------------->
    int left = 0;
    int right = arr.size() - 1;
    vector<int> result(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--) {
        int leftsq = arr[left] * arr[left];
        int rightsq = arr[right] * arr[right];

        if (leftsq > rightsq) {
            result[i] = leftsq;
            left++;
        } else {
            result[i] = rightsq;
            right--;
        }
    }
    return result;
}//<----------------------------------------------To Here understand or whatever :)

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> result = sq_Array_Sorted(arr);

    for (int i = 0; i < n; i++) cout << result[i] << " ";
    return 0;
}
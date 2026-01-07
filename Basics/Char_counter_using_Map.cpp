#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // Read size of the array
    int n;
    cin >> n;

    // Read array elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build frequency map
    map<int, int> freq;
    for (int x : arr) {
        freq[x]++;
    }
    // Map is a sorted structure we can print it and see the frequency of all elements
    for(auto it : freq  ){
    cout<<it.first<<"->"<<it.second<<endl;
  }
    
    

    // Process queries
    int t;
    cin >> t;
    while (t--) {
        int number;
        cin >> number;
        cout << freq[number] << " ";
    }

    return 0;
}
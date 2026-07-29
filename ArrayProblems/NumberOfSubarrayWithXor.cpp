#include <bits/stdc++.h>
using namespace std;

int countSubarraysBrute(vector<int>& arr, int X) {
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int xr = 0;
            for(int k = i; k <= j; k++) {
                xr ^= arr[k];   // XOR of subarray [i..j]
            }
            if(xr == X) count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};
    int X = 6;
    cout << countSubarraysBrute(arr, X);
}
// Improved O(n2)
int countSubarraysImproved(vector<int>& arr, int X) {
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int xr = 0;
        for(int j = i; j < n; j++) {
            xr ^= arr[j];   // keep updating XOR
            if(xr == X) count++;
        }
    }
    return count;
}
//optimal
int countSubarraysOptimal(vector<int>& arr, int X) {
    int n = arr.size();
    unordered_map<int,int> freq;  // stores frequency of prefix XORs
    int xr = 0, count = 0;

    for(int i = 0; i < n; i++) {
        xr ^= arr[i];   // prefix XOR till i

        if(xr == X) count++;   // subarray from 0..i

        int need = xr ^ X;     // check if some prefix exists
        if(freq.find(need) != freq.end()) {
            count += freq[need];
        }

        freq[xr]++;   // store current prefix XOR
    }
    return count;
}

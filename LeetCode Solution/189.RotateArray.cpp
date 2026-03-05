//Optimal
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // handle cases where k > n

        // Step 1: Reverse entire array
        reverse(nums.begin(), nums.end());
        // Step 2: Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);
        // Step 3: Reverse remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};

//brute
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %=n;
        for(int i=0;i<n;i++){
            int last = nums[n-1];
            for(int j = n-1;j>0;j--){
                nums[j] = nums[j-1];

            }
         nums[0] = last;

        }
    }
};
//By taking more sapce 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> temp(n);
        
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;
    }
};

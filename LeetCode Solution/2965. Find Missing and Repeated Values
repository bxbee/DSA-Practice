class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();   // ✅ Grid is n x n, so total numbers = n*n
        unordered_set<int> s;  // ✅ To track seen numbers
        vector<int> ans;       // ✅ Final answer: [repeated, missing]

        int repeated, missing;
        int actualSum = 0;     // ✅ Sum of all elements in the grid
        int expectedSum;       // ✅ Sum of 1 to n*n

        // ✅ Step 1: Traverse the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualSum += grid[i][j];  // Add to actual sum

                // ✅ Step 2: Detect repeated number
                if (s.find(grid[i][j]) != s.end()) {
                    repeated = grid[i][j];   // Found duplicate
                    ans.push_back(repeated); // Store repeated
                }
                s.insert(grid[i][j]);        // Mark number as seen
            }
        }

        // ✅ Step 3: Calculate expected sum of 1 to n*n
        expectedSum = (n * n) * (n * n + 1) / 2;

        // ✅ Step 4: Missing number formula
        // expectedSum = actualSum - repeated + missing
        // Rearranging → missing = expectedSum + repeated - actualSum
        missing = expectedSum + repeated - actualSum;

        ans.push_back(missing); // Store missing number

        return ans; // ✅ Answer format: [repeated, missing]
    }
};

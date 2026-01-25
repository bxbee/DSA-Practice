<!-- Problem Card Layout -->
<div style="
  border: 2px solid #4CAF50;
  border-radius: 10px;
  padding: 20px;
  margin: 15px 0;
  background: #f9f9f9;
  box-shadow: 2px 2px 8px rgba(0,0,0,0.1);
  font-family: 'Segoe UI', sans-serif;
">

  <!-- Title -->
  <h2 style="color:#2E8B57; margin-top:0;">🔹 Problem: Binary Search</h2>

  <!-- Description -->
  <p><strong>Description:</strong> Given a sorted array, find the index of a target element using binary search.</p>

  <!-- Complexity Badges -->
  <div style="margin:10px 0;">
    <span style="
      display:inline-block;
      background:#2196F3;
      color:white;
      padding:5px 10px;
      border-radius:20px;
      font-size:12px;
      margin-right:5px;">
      ⏱ Time: O(log n)
    </span>
    <span style="
      display:inline-block;
      background:#FF9800;
      color:white;
      padding:5px 10px;
      border-radius:20px;
      font-size:12px;">
      💾 Space: O(1)
    </span>
  </div>

  <!-- Code Snippet -->
  <pre style="
    background:#272822;
    color:#f8f8f2;
    padding:15px;
    border-radius:8px;
    overflow-x:auto;
    font-size:14px;">
<code>// C++ Implementation
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
</code>
  </pre>

  <!-- Diagram -->
  <p><strong>Diagram:</strong></p>
  <img src="https://upload.wikimedia.org/wikipedia/commons/f/f7/Binary_tree.svg" 
       alt="Binary Tree Diagram" 
       style="max-width:100%; border:1px solid #ddd; border-radius:8px;"/>

</div>

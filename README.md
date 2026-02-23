<div align="center">

<img src="https://readme-typing-svg.demolab.com/?lines=Data+Structures+%26+Algorithms;The+Complete+DAA+Roadmap;From+Arrays+to+Dynamic+Programming;Visualized+%26+Animated!&font=Fira+Code&center=true&width=800&height=60&color=F7931E&vCenter=true&size=24" alt="Typing SVG">

A comprehensive, animated collection of data structures and algorithms Created By Me still working at it.
**Learn. Visualize. Code.**

---

### 🛠️ Tech Stack & Platforms
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=java&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Kotlin](https://img.shields.io/badge/Kotlin-7F52FF?style=for-the-badge&logo=kotlin&logoColor=white)
<br>
![LeetCode](https://img.shields.io/badge/LeetCode-000000?style=for-the-badge&logo=LeetCode&logoColor=#d16c06)
![GeeksForGeeks](https://img.shields.io/badge/GeeksForGeeks-298D46?style=for-the-badge&logo=geeksforgeeks&logoColor=white)
![HackerRank](https://img.shields.io/badge/HackerRank-2EC866?style=for-the-badge&logo=hackerrank&logoColor=white)

</div>

---

## ⚡ 1. Complexity Analysis (Big O)
Before writing code, we must measure its efficiency.

* **Time Complexity:** How the runtime grows as input size ($N$) increases.
* **Space Complexity:** How much extra memory is required.

| Complexity | Name | Example Algorithm |
| :--- | :--- | :--- |
| $O(1)$ | Constant | Accessing Array Index |
| $O(\log N)$ | Logarithmic | Binary Search |
| $O(N)$ | Linear | Loop through Array |
| $O(N \log N)$ | Linearithmic | Merge Sort, Quick Sort |
| $O(N^2)$ | Quadratic | Nested Loops (Bubble Sort) |
| $O(2^N)$ | Exponential | Recursive Fibonacci |

---

## 🧱 2. Linear Data Structures

### 🚃 Arrays
A collection of items stored at contiguous memory locations.
* **Access:** $O(1)$ (Fastest)
* **Insertion/Deletion:** $O(N)$ (Slow, requires shifting)

### 🔗 Linked Lists (Singly & Doubly)
Nodes connected by pointers. Unlike arrays, they are not stored continuously in memory.
* **Singly Linked List:** Forward navigation only.
* **Doubly Linked List:** Forward and Backward navigation.
* **Why use it?** Dynamic size and fast insertion/deletion $O(1)$ if pointer is known.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/4/4b/Doubly_linked_list_insert_after.png" alt="Linked List Insertion" width="500">
  <br>
  <i>Inserting a node into a Linked List by changing pointers.</i>
</div>

### 🥞 Stacks (LIFO)
**Last-In, First-Out.** The element inserted last is the first to be removed.
* **Operations:** `push()`, `pop()`, `peek()`
* **Use Cases:** Undo/Redo features, Browser history, Recursion stack.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/b/b4/Lifo_stack.png" alt="Stack Diagram" width="300">
</div>

### 🚶 Queues (FIFO)
**First-In, First-Out.** The element inserted first is the first to be removed.
* **Operations:** `enqueue()`, `dequeue()`
* **Use Cases:** Printer scheduling, CPU task scheduling, Breadth-First Search (BFS).

---

## 🔎 3. Searching Algorithms

### 🔦 Linear vs Binary Search
* **Linear Search:** Checks every element. $O(N)$.
* **Binary Search:** Divides the search interval in half. Requires **Sorted Array**. $O(\log N)$.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/8/83/Dictionary_Binary_Search.gif" alt="Binary Search Animation" width="400">
  <br>
  <i>Binary Search finding the target drastically faster than checking one by one.</i>
</div>

---

## 🔄 4. Sorting Algorithms

### 🧼 Bubble Sort
Repeatedly swaps adjacent elements if they are in the wrong order.
* **Complexity:** $O(N^2)$ (Slow, good for learning).

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif" alt="Bubble Sort" width="300">
</div>

### ⚡ Quick Sort
A **Divide and Conquer** algorithm. Picks a "pivot" and partitions the array.
* **Complexity:** $O(N \log N)$ usually. Fast and memory efficient.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif" alt="Quick Sort" width="300">
</div>

### 🧬 Merge Sort
Recursively divides array into halves, sorts them, and merges them.
* **Complexity:** Guaranteed $O(N \log N)$.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif" alt="Merge Sort" width="300">
</div>

---

## 🌳 5. Trees & Heaps

### 🍃 Binary Search Tree (BST)
A hierarchical structure where the left child is smaller and right child is larger.
* **Search/Insert:** $O(\log N)$ (if balanced).

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/9/9b/Binary_search_tree_example.gif" alt="BST" width="300">
</div>

---

## 🕸️ 6. Graph Algorithms (The Advanced Stuff)

Graphs represent networks (Social Media, Maps, Internet).

### 🔍 BFS (Breadth-First Search)
Explores neighbor nodes first (layer by layer). Uses a **Queue**.
* **Best for:** Shortest path in unweighted graphs.

### 🕵️ DFS (Depth-First Search)
Explores as far as possible along each branch before backtracking. Uses a **Stack** (or Recursion).
* **Best for:** Puzzle solving, maze generation.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/9/9c/Depth-First-Search.gif" alt="DFS Animation" width="350">
  <br>
  <i>Visualizing DFS traversing a graph deep into the nodes.</i>
</div>

---

## 🧠 7. Design & Analysis of Algorithms (DAA)

### 🧩 Dynamic Programming (DP)
Solves complex problems by breaking them into simpler subproblems and storing their solutions (Memoization) to avoid re-computing.
* **Examples:** Fibonacci, Knapsack Problem, Longest Common Subsequence.

### 🏃 Greedy Algorithms
Makes the locally optimal choice at each stage.
* **Examples:** Dijkstra's Algorithm, Huffman Coding, Prim's Algorithm.

### ↩️ Backtracking
Builds candidates for the solution incrementally and abandons a candidate ("backtracks") as soon as it determines the candidate cannot be a valid solution.
* **Example:** N-Queens Problem, Sudoku Solver.

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/1f/Eight-queens-animation.gif" alt="N-Queens Backtracking" width="300">
  <br>
  <i>Solving the N-Queens problem using Backtracking.</i>
</div>

---

## 📚 Resources & Links

* **Visualization:** [VisuAlgo (Must Visit!)](https://visualgo.net/en)
* **Practice:** [LeetCode Top 100 Liked](https://leetcode.com/problem-list/top-100-liked-questions/)
* **Theory:** [GeeksForGeeks DSA](https://www.geeksforgeeks.org/data-structures/)
* **Cheat Sheet:** [Big-O Cheat Sheet](https://www.bigocheatsheet.com/)

<div align="center">
  <img src="https://readme-typing-svg.demolab.com/?lines=Keep+Coding!;Happy+Learning!&font=Fira+Code&center=true&width=400&height=50&color=2E86C1" alt="Footer">
</div>

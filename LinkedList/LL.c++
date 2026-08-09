#include <iostream>   // for input/output (cout, cin)
#include <vector>     // for using dynamic arrays (vector)
using namespace std;

// -------------------- NODE STRUCT --------------------
// A "node" is the basic building block of a linked list.
// Each node stores:
//   1. 'data' → the value inside the node
//   2. 'next' → pointer to the next node in the list
struct node {
public:
    int data;      // stores the integer value
    node* next;    // pointer to the next node

public:
    // Constructor: initializes a node with given data and next pointer
    node(int data1, node* next1) {
        data = data1;   // assign value
        next = next1;   // assign next node (can be nullptr if none)
    }
};

// -------------------- MAIN FUNCTION --------------------
int main() {
    // Step 1: Create a vector (dynamic array) with values 1,2,3,4,5
    vector<int> arr = {1,2,3,4,5};

    // Step 2: Create a new node using the first element of the vector
    // Here: arr[0] = 1
    // 'nullptr' means this node does not point to any next node yet
    node* x = new node(arr[0], nullptr);

    // Step 3: Print the data stored in the node
    // Output will be: 1
    cout << x->data;

    return 0;  // End of program
}

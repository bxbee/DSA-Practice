#include <iostream>   // Needed for input/output (cout, cin)
#include <vector>     // Needed for using dynamic arrays (vector)
using namespace std;

// -------------------- NODE STRUCT --------------------
// A "node" is the basic building block of a linked list.
// Each node contains:
//   1. 'data' → the value stored inside the node
//   2. 'next' → a pointer (link) to the next node in the list
//
// Think of it like a train coach 🚂:
//   - 'data' = passengers inside the coach
//   - 'next' = connector to the next coach
//   - If 'next' = nullptr, that coach is the last one in the train
struct node {
public:
    int data;      // stores the integer value
    node* next;    // pointer to the next node

public:
    // Constructor: initializes a node with given data and next pointer
    node(int data1, node* next1) {
        data = data1;       // assign the value
        next = next1;       // assign the next node (can be nullptr if none)
    }
};

// -------------------- ARRAY TO LINKED LIST FUNCTION --------------------
// This function converts a vector (array) into a linked list.
// Steps:
//   1. Create the first node (head) using the first element of the array.
//   2. Use a "mover" pointer to keep track of the last node created.
//   3. For each remaining element in the array:
//        - Create a new node with that value.
//        - Connect the previous node's 'next' to this new node.
//        - Move the "mover" pointer forward to the new node.
//   4. Return the head pointer (start of the linked list).
node* arraytoll(vector<int>& arr) {
    // Step 1: Create the head node using the first element
    node* head = new node(arr[0], nullptr);

    // Step 2: Initialize mover to point at head
    node* mover = head;

    // Step 3: Loop through the rest of the array
    for (int i = 1; i < arr.size(); i++) {
        // Create a new node with current array element
        node* temp = new node(arr[i], nullptr);

        // Connect the previous node to this new node
        mover->next = temp;

        // Move the "mover" forward to the new node
        mover = temp;
    }

    // Step 4: Return the head (start of the linked list)
    return head;
}

// -------------------- MAIN FUNCTION --------------------
int main() {
    // Step 1: Create a vector with values
    vector<int> arr = {20, 2, 3, 4, 5};

    // Step 2: Convert the array into a linked list
    node* head = arraytoll(arr);

    // Step 3: Traverse the linked list using a temporary pointer
    // 'temp' starts at head and moves forward until it reaches nullptr
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";   // print the data of current node
        temp = temp->next;           // move to the next node
    }

    // Output will be: 20 2 3 4 5
    return 0;  // End of program
}

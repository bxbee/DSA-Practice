int countNodes(node* head) {
    int count = 0;
    node* temp = head;
    while (temp != nullptr) {
        count++;           // count current node
        temp = temp->next; // move to next node
    }
    return count;
}

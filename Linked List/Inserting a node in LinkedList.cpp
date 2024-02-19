#include<iostream>
using namespace std;

// Define a structure for a node in a linked list
struct node {
    int data;       // Data stored in the node
    node *link;     // Pointer to the next node
};

// Define a pointer type for easier manipulation of nodes
typedef node* nodePtr;

// Function to insert a new node at the beginning of the linked list
void insert(nodePtr &head, int data) {
    // Create a new node
    nodePtr tempPtr;
    tempPtr = new node;
    
    // Assign data to the new node
    tempPtr->data = data;
    
    // Link the new node to the current head of the list
    tempPtr->link = head;
    
    // Update the head to point to the new node
    head = tempPtr;
}

int main() {
    // Initialize the head pointer of the linked list
    nodePtr head;
    head = new node;
    
    // Assign initial values to the first node
    head->data = 20;
    head->link = NULL;

    // Insert a new node with data 30 at the beginning of the list
    insert(head, 30);

    // Temporary pointer to traverse the linked list
    nodePtr tmp;
    tmp = head;

    // Traverse the linked list and print the data in each node
    while (tmp != NULL) {
        cout << tmp->data << endl; // Print the data of the current node
        tmp = tmp->link;           // Move to the next node
    }
    
    // Free the memory allocated for the linked list
    // (Not implemented here but should be done in real applications)

    return 0;
}



OUTPUT:
30
20

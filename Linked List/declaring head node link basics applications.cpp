There are two information sets to store at every node, thus there is a need to create a self-defined data type to handle them. Therefore, we will use the help of structs and classes. 


  class Node{
    Public: // access modifier
    int data; // the data value
    Node* next; // the pointer to the next value
    Public:
    // constructor
    Node (int data1, Node* next1){
        data=data1;  // Initialize data with the provided value
        next=next1;  // Initialize next with the provided
    }
    Node (int data1){
        data=data1;  // Initialize data with the provided value
        next=nullptr;  // Initialize next as null since it's the end of the list

    }
};
int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}



Output:

0x11b7f90
2

APPLICATIONS:
Creating Data Structures: Linked lists serve as the foundation for building other dynamic data structures, such as stacks and queues.
Dynamic Memory Allocation: Dynamic memory allocation relies on linked lists to manage and allocate memory blocks efficiently.
Web Browser is one important application of Linked List.

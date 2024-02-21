#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;         // Data of the node
    node* next; 
    node* back;     // Pointer to the next node in the list
    // Constructor for a node with both data and next node provided
    node(int data1, node* next1,node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    // Constructor for a node with only data provided, next initialized to nullptr
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

node* convertto2dLL(vector<int> &arr){
    node* head= new node(arr[0]);
    node* prev = head;
    for(int i =0; i < arr.size();i++){
        node* temp = new node(arr[i],nullptr,prev);
        prev -> next = temp;
        prev = temp;

    }
    return head;

}
void print(node* head){
    while(head != NULL){
        cout << head->data <<" ";
        head = head-> next;
    }
}



int main(){
    vector<int> arr={12,5,8,7};
    node* head = convertto2dLL(arr);
    print(head);

    return 0;
    }

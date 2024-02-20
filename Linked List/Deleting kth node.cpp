#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;         // Data of the node
    node* next;       // Pointer to the next node in the list
    // Constructor for a node with both data and next node provided
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
    // Constructor for a node with only data provided, next initialized to nullptr
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

node* removeK(node* head,int k){
    if(head == NULL) return head;
    if(k==1){
        node* temp= head;
        head=head->next;
        free(temp);
        return head;
    }

    int cnt=0;
    node* temp=head;
    node* prev = NULL;
    while(temp!= NULL){
        cnt ++;
        if(cnt == k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
    }
    return head;
}


int main(){
    vector<int> arr={12,5,8,7};
    node* head = removeK(head,3);
    cout << head->data;

    return 0;
    }

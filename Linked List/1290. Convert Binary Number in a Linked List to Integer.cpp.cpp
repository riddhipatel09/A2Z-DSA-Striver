LEETCODE SOL:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            ans*=2;
            ans+=(temp->val);
            temp=temp->next;
        }
        return ans;
        
    }
};
.
.
.
.
    .
    .
    .
    .
    .
    .
    .
    .
    .
SIMPLE SOLUTION:


    
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to create a linked list from an array of binary digits
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

int getDecimalValue(ListNode* head) {
    int result = 0;
    ListNode* current = head;

    while (current != nullptr) {
        result = result * 2 + current->val;
        current = current->next;
    }

    return result;
}

int main() {
    cout << "Enter the number of binary digits: ";
    int n;
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the binary digits (MSB to LSB): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Create the linked list from the array
    ListNode* head = createLinkedList(arr, n);

    // Calculate the decimal value
    int decimalValue = getDecimalValue(head);
    cout << "Decimal value: " << decimalValue << endl;

    // Free memory
    ListNode* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
    delete[] arr;

    return 0;
}

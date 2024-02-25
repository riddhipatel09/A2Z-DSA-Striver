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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        ListNode* prevnode = NULL;
        ListNode* currnode = head;

        while(currnode!=NULL){
            ListNode* nextnode = currnode->next;
            currnode->next = prevnode;
            prevnode = currnode;
            currnode = nextnode;
        }

        head = prevnode;
        return head;

    }
};

TC = 0(n)
SC = 0(1)

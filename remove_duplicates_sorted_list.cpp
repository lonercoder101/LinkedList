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
    ListNode* deleteDuplicates(ListNode* fast) {
        
        ListNode* dum = new ListNode(0,fast);  // dummy node
        ListNode* temp = dum;// pointer

        while(fast!=NULL){
            if(fast->next!=NULL and fast->val==fast->next->val){
                while(fast->next!=NULL and fast->val==fast->next->val)  //moving fast pointer as long as long same elements
                    fast=fast->next;
                temp->next=fast->next;
            }
            else
                temp=temp->next; // single element 
            fast=fast->next; //necessary
        }
        dum=dum->next;  //first node is zero so move ahead
        return dum;   //return
        
        
        
    }
};

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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return ;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=NULL;
        slow=head;
        //reverse
        ListNode* prev=NULL;
        ListNode* curr=fast;
        ListNode* next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        fast=prev;
        ListNode* temp=fast;
        ListNode *nextf,*nexts;
        while(slow && fast){
            nexts=slow->next;
            nextf=fast->next;
            slow->next=fast;
            fast->next=nexts;
            slow=nexts;
            fast=nextf;
        }
        
        return;
        
    }
};

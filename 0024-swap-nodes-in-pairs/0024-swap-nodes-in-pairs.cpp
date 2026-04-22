class Solution {
public: 
    ListNode* swapPairs(ListNode* head) {
        ListNode*dummy=new ListNode(-100);
        dummy->next=head;
        ListNode*temp=dummy;
        while(temp->next!=NULL && temp->next->next!=NULL){
            ListNode*a=temp->next;
            ListNode*b=a->next;
            a->next=b->next;
            b->next=a;
            temp->next=b;
            temp=a;
        }
        return dummy->next;
    }
};
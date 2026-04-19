class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*temp=head;
        ListNode*before=NULL;
        int pos=1;
        while(pos<left){
            before=temp;
            temp=temp->next;
            pos++;
            continue;
        }
        int times=right-left+1;
        ListNode*prev=NULL;
        ListNode*curr=temp;
        ListNode*Next=NULL;
        while(times--){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        temp->next=curr;
        if(before!=NULL) before->next=prev;
        else head=prev;
        return head;
    }
};
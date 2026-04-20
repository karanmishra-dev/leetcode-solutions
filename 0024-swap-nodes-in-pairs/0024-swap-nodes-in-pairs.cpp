class Solution {
public:
    void reverse(ListNode*head,int size){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*Next=NULL;
        while(size--){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        int size=2;
        ListNode*left=head;
        ListNode*right;
        ListNode*prevLeft=NULL;
        ListNode*res=NULL;
        while(true){
            right=left;
            for(int i=0;i<(size-1);i++){
                if(right==NULL) break;
                right=right->next;
            }
            if(right!=NULL){
                ListNode*nextLeft=right->next;
                reverse(left,size);
                if(prevLeft!=NULL){
                    prevLeft->next=right;
                }
                prevLeft=left;
                if(res==NULL) res=right;
                left=nextLeft;
            }
            else{
                if(prevLeft!=NULL){
                    prevLeft->next=left;
                    if(res==NULL) res=left;
                }
                break;
            }
        }
        return res;
    }
};
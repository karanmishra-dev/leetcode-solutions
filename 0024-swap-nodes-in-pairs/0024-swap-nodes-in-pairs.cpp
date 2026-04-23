class Solution {
public:  
    void reverse(ListNode*head,int times){
        ListNode*curr=head;
        ListNode*Next=NULL;
        ListNode*prev=NULL;
        while(times--){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
    }
    ListNode* swapPairs(ListNode* head) {
        //METHOD-1 USING DUMMY NODE

        // ListNode*dummy=new ListNode(-100);
        // dummy->next=head;
        // ListNode*temp=dummy;
        // while(temp->next!=NULL && temp->next->next!=NULL){
        //     ListNode*a=temp->next;
        //     ListNode*b=a->next;
        //     a->next=b->next;
        //     b->next=a;
        //     temp->next=b;
        //     temp=a;
        // }
        // return dummy->next;

        //METHOD-2 GENERALISED FOR SIMILAR TYPE OF PROBLEMS
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
                if(prevLeft!=NULL) prevLeft->next=right;
                prevLeft=left;
                if(res==NULL) res=right;
                left=nextLeft;
            }
            // if there are odd no of nodes so last node will be as it is 
            else{
                if(prevLeft!=NULL) prevLeft->next=left;
                break;
            }
        }
        return res;
    }
};
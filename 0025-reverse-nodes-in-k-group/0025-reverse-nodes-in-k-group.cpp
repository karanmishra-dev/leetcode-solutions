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
    void reverse(ListNode*head,int times){
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*Next=NULL;
        while(times--){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode*left=head;
        ListNode*right;
        ListNode*res=NULL;
        ListNode*prevLeft=NULL;
        while(true){
            right=left;
            for(int i=0;i<k-1;i++){
                if(right==NULL) break;
                right=right->next;
            }
            if(right!=NULL){
                ListNode*nextLeft=right->next;
                reverse(left,k);
                if(prevLeft!=NULL) prevLeft->next=right;
                prevLeft=left;
                if(res==NULL) res=right;
                left=nextLeft;
            }
            else{
                if(prevLeft!=NULL) prevLeft->next=left;
                if(res==NULL) res=left;
                break;
            }
        }
        return res;
    }
};
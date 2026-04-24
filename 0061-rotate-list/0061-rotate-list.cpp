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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode*last=head;
        int n=1;
        while(last->next!=NULL){
            n++;
            last=last->next;
        }
        k%=n;
        if(k==0) return head;
        int c=n-k;
        int count=1;
        ListNode*temp=head;
        while(temp!=NULL){
            if(count==c) break;
            count++;
            temp=temp->next;
        }
        ListNode*res=temp->next;
        temp->next=NULL;
        last->next=head;
        return res;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode*a=head;
        ListNode*b=a->next;
        while(a!=NULL){
            if(b!=NULL && a->val==b->val){
                b=b->next;
            }
            else{
                a->next=b;
                a=b;
                if(b!=NULL) b=b->next;
            }
        }
        return head;
    }
};
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
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* curr=head;
        int count=1;
        while(curr->next){
            curr=curr->next;
            count++;
        }
        curr->next=head;
        ListNode* temp=head;
        int diff=abs(count-k%count);
        for(int i=1;i<diff;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
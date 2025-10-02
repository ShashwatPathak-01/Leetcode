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
    ListNode* revNode(ListNode* head){
        ListNode* curr=head;
        ListNode* back=NULL;
        ListNode* front=NULL;
        while(curr){
            front=curr->next;
            curr->next=back;
            back=curr;
            curr=front;
        }
        return back;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newNode=revNode(slow->next);
        while(temp && newNode){
            if(temp->val != newNode->val)
            return false;
            temp=temp->next;
            newNode=newNode->next;
        }
        return true;
    }
};
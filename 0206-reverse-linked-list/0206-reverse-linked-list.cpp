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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* pre=nullptr;
        ListNode* temp=head;
        while(temp){
            ListNode* next=temp->next;
            temp->next=pre;
            pre=temp;
            temp=next;
        }
        return pre;
    }
};
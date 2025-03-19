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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==nullptr)
        return NULL;
        ListNode* temp=head;
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        ListNode* pre=head;
        ListNode* temp1=head->next;
        int x=(c/2);
        int i=0;
        while(temp1!=NULL){
            i++;
            if(x==i){
                pre->next=temp1->next;
                break;
            }
            else
            pre=temp1;
            temp1=temp1->next;
        }
        return head;
    }
};
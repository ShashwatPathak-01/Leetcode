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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int c=0,x=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        x=c/2;
        ListNode* mid=head;
        int i=0;
        ListNode* temp1=head;
        while(temp1){
            if(i==x)
            mid=temp1;
            else{
                temp1=temp1->next;
            }
            i++;
        }
        return mid;
    }
};
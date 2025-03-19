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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* pre=nullptr;
        ListNode* temp=head;
        vector<int>even;
        vector<int>odd;
        int i=0;
        while(temp){
            i++;
            if(i%2==1){
                odd.push_back(temp->val);
            }
            else
            even.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<even.size();i++)
        odd.push_back(even[i]);
        int j=0;
        ListNode* temp1=head;
        while(temp1){
            temp1->val=odd[j];
            j++;
            temp1=temp1->next;
        }
        return head;
    }
};
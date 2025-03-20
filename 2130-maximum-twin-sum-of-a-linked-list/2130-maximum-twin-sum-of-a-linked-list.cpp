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
    int pairSum(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            int n=v.size()/2;
            int x=v[n-1]+v[n];
            sum=max(sum,x);
            v.erase(v.begin()+n);
            v.erase(v.begin()+(n-1));
            i=0;
        }
        return sum;
    }
};
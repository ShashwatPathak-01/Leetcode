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
    ListNode* reverseNode(ListNode* temp){
        ListNode* back=NULL;
        ListNode* curr=temp;
        ListNode* front=NULL;
        while(curr){
            front=curr->next;
            curr->next=back;
            back=curr;
            curr=front;
        }
        return back;
    }
    ListNode* check(ListNode* temp,int k){
        ListNode* node=temp;
        for(int i=1;i<k;i++){
            if(node)
            node=node->next;
            else
            return NULL;
        }
        return node;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        return head;
        ListNode* temp=head;
        ListNode* nextNode=NULL;
        ListNode* prevNode=NULL;
        ListNode* newHead=temp;
        while(temp){
            ListNode* checkNode=check(temp,k);
            if(checkNode==NULL)
            break;
            nextNode=checkNode->next;
            checkNode->next=NULL;
            ListNode* revNode=reverseNode(temp);
            if(temp==head)
            newHead=revNode;
            else
            prevNode->next=checkNode;
            prevNode=temp;
            temp=nextNode;
        }
        if(nextNode)
        prevNode->next=nextNode;
        if(newHead)
        return newHead;
        return head;
    }
};
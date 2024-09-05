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
    ListNode *reverseLL(ListNode*head){
        ListNode*curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return true;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*headr=reverseLL(slow->next);
        ListNode*first=head;
        ListNode*second=headr;
        while(second!=nullptr){
            if(second->val!=first->val){
                reverseLL(headr);
                return false;
            }
            second=second->next;
            first=first->next;
        }
        reverseLL(headr);
        return true;
    }
};
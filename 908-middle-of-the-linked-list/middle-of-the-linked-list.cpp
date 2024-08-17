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
        if(head==nullptr) return nullptr;
        ListNode * curr=head;
        int count=0;
        while(curr!=nullptr){
            count++;
            curr=curr->next;
        }
        count=count/2;
        curr=head;
        while(count--){
            curr=curr->next;
        }
        return curr;  
    }
};
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
    ListNode* merge(ListNode* lefthead,ListNode*righthead){
        ListNode* dummy=new ListNode(-1);
        ListNode* dummyhead=dummy;
        while(lefthead!=nullptr&&righthead!=nullptr){
            if(lefthead->val<=righthead->val){
                dummyhead->next=lefthead;
                dummyhead=dummyhead->next;
                lefthead=lefthead->next;
            }
            else{
                dummyhead->next=righthead;
                dummyhead=dummyhead->next;
                righthead=righthead->next;
            }
        }
        if(lefthead){
            dummyhead->next=lefthead;
        }
        if(righthead){
            dummyhead->next=righthead;
        }
        return dummy->next;
    }
    ListNode* findmiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    ListNode* ms(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode*middle=findmiddle(head);
        ListNode*lefthead=head;
        ListNode*righthead=middle->next;
        middle->next=nullptr;
        lefthead=ms(lefthead);
        righthead=ms(righthead);
        return merge(lefthead,righthead);

    }

    ListNode* sortList(ListNode* head) {
        return ms(head);
    }
};
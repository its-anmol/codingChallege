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
        if(head == NULL || head->next == NULL) return head;
        ListNode *evenhead=head->next;
        ListNode *oddhead=head;
        ListNode *ehead=evenhead;
        ListNode *ohead=oddhead;
        while(ehead and ehead->next){
            ohead->next=ohead->next->next;
            ehead->next=ehead->next->next;
            ehead=ehead->next;
            ohead=ohead->next;
        }
        ohead->next=evenhead;
        return head;
    }
};
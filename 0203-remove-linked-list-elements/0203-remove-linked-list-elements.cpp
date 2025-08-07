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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode start;
        start.next = head;
        ListNode* prev = NULL;
        while (head != NULL){
            if(head->val == val){
                if(prev) prev->next = head->next;
                else start.next = head->next;
            }
            else{
                if(prev) prev = prev->next;
                else prev = start.next;
            }
            head = head->next;
        }
        return start.next;
    }
};
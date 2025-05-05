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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->val == temp->next->val){
                //remove
                ListNode*newnode = temp->next;
                temp->next = newnode->next;
                newnode->next = NULL;
                //hear basically we have just shift the the temp ka pointer to the newnode ka next this is done to isolate the newnode.
                delete newnode;
                //now we can easily delete the newnode as it has been isolated
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
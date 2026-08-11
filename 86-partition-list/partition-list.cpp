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
    ListNode* partition(ListNode* head, int x) {
        ListNode* head1 =new ListNode(0);
        ListNode* head2 = new ListNode(0);
        ListNode* temp;
        ListNode* t;
        ListNode* y;
        t = head1;
        y = head2;
        temp = head;
        while(temp != nullptr){
            if(temp->val < x){
                head1->next = new ListNode(temp->val);
                head1 = head1->next;
            }
            else{
                head2->next = new ListNode(temp->val);
                head2 = head2->next;
            }
            temp = temp->next;
        }
        ListNode* temp1;
        temp1 = t;
        while(temp1->next != nullptr){
            temp1= temp1->next;
        }
        temp1->next = y->next; 
        return t->next;

    }
};










/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };if
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 1;
        ListNode* last = head;
        if(head == nullptr){return nullptr;}
        while(last->next != nullptr){
            n++;
            last = last->next;
        }
        k = k%n;
        if(k == 0){ return head;}
        ListNode* t = head;
        int c = 1;
        while(t != nullptr){
            if(c == n - k){
                break;
            }
            c++;
            t = t->next;
        }

        ListNode* res = t->next;
        t->next = nullptr;
        last->next = head;
        return res;
        
    }
};
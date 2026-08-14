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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res(k,nullptr);
        ListNode* t = head;
        int n = 0;
        while(t!= nullptr)
        {
            n++;
            t = t->next;
        }
        int a = n/k;
        int b = n%k;
        int m = 0;
        ListNode* h = head;
        while(m != b){
            res[m] = h;
            for(int i =0;i < a;i++){
                h = h->next;
            }
            
            ListNode* nexpart = h->next;
            h->next = nullptr;
            h = nexpart;
            m++;
        }
        while(h != nullptr){
            res[m] = h;
            for(int i =0;i < a - 1;i++){
                h = h->next;
            }
            ListNode* nexpart = h->next;
            h->next = nullptr;
            h = nexpart;
            m++;
        }
        return res;
        

    }
};
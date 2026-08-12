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
 void rev(ListNode* head,int size){
    ListNode* curr = head;
    ListNode* prev = nullptr;
    while(size--){
        ListNode* nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return;
 }
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode*left;
        ListNode* right;
        ListNode* prevleft = nullptr;;
        ListNode* res = nullptr;
        int size = 2;
        left = head;
        while(true)
        {
            right = left;
            for(int i = 0;i < (size - 1);i++)
            {
                if(right == nullptr){
                    break;
                }
                right =right->next;
            }
            if(right)
            {
                ListNode* nextleft = right->next;
                rev(left,size);
                if(prevleft){
                    prevleft->next = right;
                    
                }
                prevleft = left;
                if(res == nullptr){
                    res = right;
                    
                }
                left = nextleft;

            }
            else
            {
                if(prevleft){
                    prevleft->next = left;
                }
                if(res == nullptr){
                    res = left;
                    
                }
                break;
            }
        }
        return res;

    }
};
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
 void rev(ListNode* head,int k){
    ListNode* curr = head;
    ListNode* prev = nullptr;
    while(k--){
        ListNode* nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return;
 }
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = nullptr;
        ListNode* prevleft = nullptr;
        ListNode*  res = nullptr;
        while(true){
            right = left;
            for(int i = 0;i < k - 1;i++){
                if(right == nullptr){
                    break;
                }
                right = right->next;
            }
            if(right) // left and right mil gya  hai 
            {
                ListNode* nextleft =  right->next;
                rev(left,k);
                if(prevleft){
                    prevleft->next = right;
                }
                prevleft = left;
                if(res == nullptr){
                    res = right;// this runs only 1 time as res is set to right that will be  retured at the end 
                }
                left = nextleft;
            }
            else // when we don't find any right that is either end or LL is only of one element  
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
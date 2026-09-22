/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 void fun(TreeNode* root,vector<int>& f){
    if(root ==NULL)return;
    f.push_back(root->val);
    fun(root->left,f);
    fun(root->right,f);
 }
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>f;
        fun(root,f);
        return f;    
        }
};
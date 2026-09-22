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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        int ltr = 1;
        if(root == NULL)return res;
        q.push(root);
        while(!q.empty()){
            int lvls = q.size();
            vector<int> f(lvls);
            int ft = 0;
            int lt = lvls -1;
            while(lvls--){
                TreeNode* t = q.front();
                q.pop();
                if(ltr == 1){
                    f[ft] = t->val;
                    ft++;
                }
                else{
                    f[lt] = t->val;
                    lt--;
                }
                if(t->left != NULL)q.push(t->left);
                if(t->right != NULL)q.push(t->right);
            }
            ltr = 1- ltr;
            res.push_back(f);
            

        }
        return res;
    }
};
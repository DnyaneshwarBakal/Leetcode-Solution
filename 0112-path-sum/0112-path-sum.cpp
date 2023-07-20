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
    bool solve(TreeNode* root,int key)
    {
        if(root==NULL)return 0;
        if(root->val==key&& root->left==NULL&&root->right==NULL)return true;
        
        bool left=solve(root->left,key - root->val);
        bool right=solve(root->right,key - root->val);
        return left || right;
    }
    bool hasPathSum(TreeNode* root, int key) {
        if(root==NULL)return false;
        
        return solve(root,key);
    }
};
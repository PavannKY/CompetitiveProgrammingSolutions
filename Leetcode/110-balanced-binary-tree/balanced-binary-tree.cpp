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
    int dfs(TreeNode* node)
    {
        if(node==NULL) return 0;

        int lf = dfs(node->left);
        if(lf==-1) return -1;
        int rf = dfs(node->right);
        if(rf==-1) return -1;

        if(abs(rf-lf)>1) return -1;
        return max(rf,lf)+1;

    }
    bool isBalanced(TreeNode* root) {
        return dfs(root)!=-1;
        
    }
};
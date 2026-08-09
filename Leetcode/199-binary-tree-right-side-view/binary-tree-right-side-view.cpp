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
    void trav(TreeNode* node,unordered_map<int,int> &map,vector<int> & ans,int idx)
    {
        if(!map[idx])
        {
            map[idx] = 1;
            ans.push_back(node->val);
        }
        if(node->right!=NULL) trav(node->right,map,ans,idx+1);
        if(node->left!=NULL) trav(node->left,map,ans,idx+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        unordered_map<int, int> map;
        vector<int> ans;
        if (root == NULL)
            return ans;
        trav(root,map,ans,0);
        return ans;

    }
};
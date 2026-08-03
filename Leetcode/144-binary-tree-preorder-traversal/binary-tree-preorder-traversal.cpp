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
    void preorder(TreeNode* node,vector<int> &ans)
    {
        if(node==NULL) return;
        ans.push_back(node->val);
        preorder(node->left,ans);
        preorder(node->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root)
    {
        stack<TreeNode*> st;
        TreeNode* node=root;
        if(node==NULL) return {};
        st.push(node);
        vector<int> ans;
        while(!st.empty())
        {
            TreeNode* temp = st.top();
            ans.push_back(temp->val);
            st.pop();

            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }

        return ans;
    }
};
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
    void postorder(TreeNode* node,vector<int> &ans)
    {
        if(node==NULL) return;
        postorder(node->left,ans);
        postorder(node->right,ans);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root)
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

            if(temp->left) st.push(temp->left);
            if(temp->right) st.push(temp->right);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
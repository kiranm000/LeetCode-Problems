//Binary Tree Inorder Traversal
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return ans;
        else
        {inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);}
        return ans;
    }
};
//Kth Smallest Element in a BST
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans = Preorder(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
    
    vector<int> ele;
    vector<int> Preorder(TreeNode* root) {
        { if(root == NULL) return {0};
	ele.push_back(root->val);
	Preorder(root->left);     
	Preorder(root->right); }
        return ele;
    }  
};
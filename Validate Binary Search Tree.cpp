//Validate Binary Search Tree
class Solution {
public:
    vector<int> elems;
    vector<int> Inorder(TreeNode* root)
    {
        {
            if(root==NULL) return {0};
            Inorder(root->left);
            elems.push_back(root->val);
            Inorder(root->right);
        }
        return elems;
    }

    bool isValidBST(TreeNode* root) 
    {
        int count=1;
        vector<int> nums=Inorder(root);
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
                count++;
        }
        if(count==nums.size())
            return true;
        else
            return false;
    }
};
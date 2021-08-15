//Convert Sorted List to Binary Search Tree
class Solution {
public:
    vector<int> Ele(ListNode* head,vector<int> nums)
    {
        while(head)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        return nums;
    }
    
    TreeNode* sortedListToBST(ListNode* head) 
    {
        vector<int> nums;
        vector<int> elem=Ele(head,nums);
        TreeNode* answer=Solve(elem);
        return answer;
    }
    
    TreeNode* Solve(vector<int> elem)
    {
        if(elem.size() == 0) return NULL;
        if(elem.size() == 1)
        {
            return new TreeNode(elem[0]);
        }
        
        int middle = elem.size()/2;
        TreeNode* root = new TreeNode(elem[middle]);
        
        vector<int> leftInts(elem.begin(), elem.begin()+middle);
        vector<int> rightInts(elem.begin()+middle+1, elem.end());
        
        root->left = Solve(leftInts);
        root->right = Solve(rightInts);
        
        return root;
    }
};

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);
        TreeNode* ans = new TreeNode(0);
        TreeNode* curr = ans;
        for(int  i=0; i<arr.size();i++) 
        {
            curr->right = new TreeNode(arr[i]);
            curr = curr->right;
        }
        return ans->right;
    }
    void inorder(TreeNode* root,vector<int>& arr) 
    {
        if(root==NULL)
        return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
};

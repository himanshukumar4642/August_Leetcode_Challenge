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
    
    int util(TreeNode* root,int currSum,int sum){
        if(root==NULL) return 0;
        int tempSum = currSum + root->val;
        if(tempSum==sum)
            return 1+util(root->left, tempSum, sum) + util(root->right, tempSum, sum);
        else
            return util(root->left, tempSum, sum) + util(root->right, tempSum, sum);
    }
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return util(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};

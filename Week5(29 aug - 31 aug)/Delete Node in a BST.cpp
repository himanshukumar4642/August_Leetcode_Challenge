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
    TreeNode* findMin(TreeNode* root){
        while(root->left!=NULL) root=root->left;
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(key>root->val) root->right=deleteNode(root->right,key);
        else if(key<root->val) root->left=deleteNode(root->left,key);
        else{
            if(!root->right) return root->left;
            else if(!root->left) return root->right;
            else{
                TreeNode* succ=findMin(root->right);
                root->val=succ->val;
                root->right=deleteNode(root->right,succ->val);
            }
        }
        return root;
    }
};

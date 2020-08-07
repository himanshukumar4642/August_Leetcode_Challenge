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
    map<int,vector<pair<int,int>>> mp;
    void util(TreeNode* root, int index,int level){
        if(root==NULL){
            return;
        }
        
        mp[index].push_back({level,root->val});
        util(root->left,index-1,level+1);
        util(root->right,index+1,level+1);
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        util(root,0,0);
        vector<vector<int>> ans;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            sort(i->second.begin(),i->second.end());
        }
        
        for(auto i=mp.begin();i!=mp.end();i++){
            vector <int> temp;
            for(auto j=0;j<i->second.size();j++){
                temp.push_back(i->second[j].second);
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};

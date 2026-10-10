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
void solve(TreeNode* root,vector<int>&path,vector<vector<int>>&ans){
    if (root == NULL){
            return;
        }
        
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL){
            ans.push_back(path);
        }
        solve(root->left,path,ans);
        solve(root->right,path,ans);
        path.pop_back();
        
}


class Solution {
public:
    int sumNumbers(TreeNode* root) {
        vector<int>path;
        vector<vector<int>>ans;
        solve(root,path,ans);
        vector<int>x;
        for (int i=0;i<ans.size();i++){
            string m;
            for (int j:ans[i]){
                m+=to_string(j);
            }
            x.push_back(stoi(m));
        }
        int n=accumulate(x.begin(),x.end(),0);
        return n;

    }
};
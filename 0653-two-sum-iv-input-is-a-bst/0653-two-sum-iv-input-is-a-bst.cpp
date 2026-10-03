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
    bool findTarget(TreeNode* root, int k) {
        if (root == NULL && k>0){
            return false;
        }
        vector<int>a;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            a.push_back(node->val);
            if (node->left){
                q.push(node->left);
            }
            if (node->right){
                q.push(node->right);
            }
        }
        for (int i=0;i<a.size();i++){
            for (int j=i+1;j<a.size();j++){
                if (a[i]+a[j]==k){
                    return true;
                }
            }
        }
        return false;
    }
};
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
    bool isUnivalTree(TreeNode* root) {
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
        if (count(a.begin(),a.end(),a[0])==a.size()){
            return true;
        }
        return false;
    }
};
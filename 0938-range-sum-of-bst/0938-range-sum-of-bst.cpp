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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>a;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if (node->val >= low && node->val <= high){
                a.push_back(node->val);
            }
            if (node->left){
                q.push(node->left);
            }
            if (node->right){
                q.push(node->right);
            }
        }
        return accumulate(a.begin(),a.end(),0);
    }
};
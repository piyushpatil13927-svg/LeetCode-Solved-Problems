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
    int sumOfLeftLeaves(TreeNode* root) {
        int a=0;
        if (root == NULL){
            return 0;
        }
        vector<int>left;
        if (root->left != NULL && root->left->left == NULL && root->left->right == NULL){
            left.push_back(root->left->val);
        }
        left.push_back(sumOfLeftLeaves(root->left));

        vector<int>right;
        // if (root->left != NULL && root->left->left == NULL && root->left->right == NULL){
        //     left.push_back(root->left->val);
        // }
        left.push_back(sumOfLeftLeaves(root->right));
        

        for (int i:left){
            a+=i;
        }
        for (int i:right){
            a+=i;
        }
       
        return a;
    }
};
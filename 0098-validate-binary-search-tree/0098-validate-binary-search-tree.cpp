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
void inOrder(TreeNode* root, vector<int>&arr){
    if (root == NULL){
        return;
    }
    inOrder(root->left,arr);
    arr.push_back(root->val);
    inOrder(root->right,arr);
}

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int>arr;
        inOrder(root,arr);
        for (int i=0;i<arr.size()-1;i++){
            if (arr[i]>=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
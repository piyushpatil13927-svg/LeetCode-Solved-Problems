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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int>a1;
        
        stack<TreeNode*>q1;
        q1.push(root1);
       
        while (!q1.empty()){
           
            TreeNode* node1 = q1.top();
            q1.pop();
            if (node1->left == NULL && node1->right == NULL){
                a1.push_back(node1->val);
            }
            if (node1->left){
                q1.push(node1->left);
            }
            if (node1->right){
                q1.push(node1->right);
            }
        
        }
        vector<int>a2;
        
        stack<TreeNode*>q2;
        q2.push(root2);
       
        while (!q2.empty()){
           
            TreeNode* node2 = q2.top();
            q2.pop();
            if (node2->left == NULL && node2->right == NULL){
                a2.push_back(node2->val);
            }
            if (node2->left){
                q2.push(node2->left);
            }
            if (node2->right){
                q2.push(node2->right);
            }
        
        }
        return a1 == a2;
        
    }
};
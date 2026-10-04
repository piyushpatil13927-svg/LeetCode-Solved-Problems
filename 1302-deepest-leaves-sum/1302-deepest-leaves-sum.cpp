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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>>a;
        queue<TreeNode*>q;
        q.push(root);
        bool ltor = true;
        while (!q.empty()){
            int size = q.size();
            vector<int>level;
            for (int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if (node->left){
                    q.push(node->left);
                }
                if (node->right){
                    q.push(node->right);
                }
            }
            if (!ltor){
                reverse(level.begin(),level.end());
            }
            a.push_back(level);
            ltor = !ltor;
        }
        vector<int>x;
        for (int i=0;i<a[a.size()-1].size();i++){
            x.push_back(a[a.size()-1][i]);
        }
        return accumulate(x.begin(),x.end(),0);

    }
};
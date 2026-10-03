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
    int maxLevelSum(TreeNode* root) {
        vector<int>a;
        if (root == NULL){
            return 0;
        }

        queue<TreeNode*>q;
        q.push(root);
        bool ltor = true;

        while (!q.empty()){
            vector<int>level;
            int size = q.size();
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
            a.push_back(accumulate(level.begin(),level.end(),0));
        }

        return max_element(a.begin(),a.end()) - a.begin() + 1;


    }
};
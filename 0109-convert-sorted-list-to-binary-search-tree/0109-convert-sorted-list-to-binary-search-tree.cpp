/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
TreeNode* sortedArrayToBST(vector<int>&a) {
    if (a.empty()){
            return NULL;
        }

        int mid = a.size()/2;

        TreeNode* root = new TreeNode(a[mid]);

        vector<int>left(a.begin(),a.begin()+mid);
        vector<int>right(a.begin()+mid+1,a.end());

        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);

        return root;
}

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>a;
        ListNode* temp = head;
        while (temp != NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }

        return sortedArrayToBST(a);

        


    }
};
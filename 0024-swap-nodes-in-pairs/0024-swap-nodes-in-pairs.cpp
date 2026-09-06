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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL){
            return NULL;
        }
       
        int k =2;
        vector<ListNode*>a;
        ListNode* temp = head;
        while(temp != NULL){
            a.push_back(temp);
            temp = temp->next;
        }

        if (a.size()==1){
            return head;
        }
        
        
        for (int i=0;i<=a.size()-k;i+=k){
            reverse(a.begin()+i,a.begin()+i+k);
        }

        
        for (int i=0;i<a.size()-1;i++){
            a[i]->next = a[i + 1];
        }

        // Last node points to NULL
        a.back()->next = NULL;

        return a[0];
    }
};
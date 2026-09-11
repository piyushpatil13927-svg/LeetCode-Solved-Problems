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
    void reorderList(ListNode* head) {
        vector<int>a;
        ListNode* temp = head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp= temp->next;
        }
        vector<int>x;
        for (int i=0;i<a.size()/2;i++){
            x.push_back(a[i]);
            x.push_back(a[a.size()-1-i]);
        }

        if (a.size()%2!=0){
            x.push_back(a[a.size()/2]);
        }

        temp = head;

        for(int i:x){
            temp->val = i;
            temp = temp->next;
        }


        
    }
};
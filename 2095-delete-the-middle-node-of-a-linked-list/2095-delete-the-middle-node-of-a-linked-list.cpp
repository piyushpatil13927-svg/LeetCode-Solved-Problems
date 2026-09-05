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
    ListNode* deleteMiddle(ListNode* head) {
        vector<int>a;
        ListNode* temp = head;
        while (temp != NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* heada = NULL;
        ListNode* tail = NULL;
        for (int i=0;i<a.size();i++){
            if (i!=a.size()/2){
                ListNode* newNode = new ListNode(a[i]);
                if (heada == NULL){
                    heada = tail = newNode;
                }else{
                    tail->next = newNode;
                    tail = newNode;
                }
            }
        }
        return heada;
    }
};
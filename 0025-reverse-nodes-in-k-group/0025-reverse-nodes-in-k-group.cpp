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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>a;
        ListNode* temp = head;
        while (temp!=NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }
        for (int i=0;i+k<=a.size();i+=k){
            reverse(a.begin()+i,a.begin()+i+k);
        }
        ListNode* heada = NULL;
        ListNode* tail = NULL;
        for (int i:a){
            ListNode* newNode = new ListNode(i);
            if (heada == NULL){
                heada = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return heada;
    }
};
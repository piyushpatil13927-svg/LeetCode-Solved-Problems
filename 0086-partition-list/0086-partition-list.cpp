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
    ListNode* partition(ListNode* head, int x) {
        vector<int>a;
        vector<int>b;
        ListNode* temp = head;
        while (temp != NULL){
            if (temp->val < x){
                a.push_back(temp->val);
            }else{
                b.push_back(temp->val);
            }
            temp = temp->next;
        }
        for (int i:b){
            a.push_back(i);
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
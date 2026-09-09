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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int>m;
        ListNode* temp = list1;
        while (temp!=NULL){
            m.push_back(temp->val);
            temp = temp->next;
        }

        vector<int>n;
        ListNode* temp2 = list2;
        while (temp2!=NULL){
            n.push_back(temp2->val);
            temp2 = temp2->next;
        }

        vector<int>x;
        for (int i=0;i<a;i++){
            x.push_back(m[i]);
        }
        for (int i=0;i<n.size();i++){
            x.push_back(n[i]);
        }
        for (int i=b+1;i<m.size();i++){
            x.push_back(m[i]);
        }
        
        ListNode* head = NULL;
        ListNode* tail = NULL;
        for (int i:x){
            ListNode* newNode = new ListNode(i);
            if (head==NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};
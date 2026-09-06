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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>a;
        ListNode* temp1 = list1;
        while (temp1!=NULL){
            a.push_back(temp1->val);
            temp1 = temp1->next;
        }
        ListNode* temp2 = list2;
        while (temp2!=NULL){
            a.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(a.begin(),a.end());
        ListNode* head = NULL;
        ListNode* tail = NULL;
        for (int i:a){
           ListNode* newNode = new ListNode(i);
           if (head == NULL){
              head = tail = newNode;
           }else{
            tail->next = newNode;
            tail = newNode;
           }


        }
        return head;

        

        
    }
};
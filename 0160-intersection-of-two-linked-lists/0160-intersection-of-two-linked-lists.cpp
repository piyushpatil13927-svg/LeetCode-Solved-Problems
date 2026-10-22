/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* temp1 = headA;
        vector<ListNode*>a;
        while (temp1!=NULL){
           a.push_back(temp1);
           temp1 = temp1->next;
        }

        ListNode* temp2 = headB;
        vector<ListNode*>b;
        while (temp2!=NULL){
           b.push_back(temp2);
           temp2 = temp2->next;
        }

        unordered_set<ListNode*>s(a.begin(),a.end());
        for (ListNode* x:b){
            if (s.count(x)){
                return x;
            }
        }
        return NULL;
        // return "No intersection"
    }
};
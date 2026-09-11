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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int>a;
        ListNode* temp = head;
        while (temp!=NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }

        

        vector<int>x;
        for (int i=0;i<a.size()-1;i++){
            x.push_back(a[i]);
            x.push_back(gcd(a[i],a[i+1]));
        }
        x.push_back(a[a.size()-1]);


        ListNode* heada = NULL;
        ListNode* tail = NULL;
        for (int i:x){
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
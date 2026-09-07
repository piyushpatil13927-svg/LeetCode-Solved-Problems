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

string add(string a){
    string s;
    int i=a.size()-1,c=0;
    while(i>=0 || c){
        int x = i>=0 ? a[i--]-'0' : 0;
        int z = x+x+c;
        s+=z%10 + '0';
        c = z/10;
    }
    reverse(s.begin(),s.end());
    return s;

}

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        string a;
        ListNode* temp = head;
        while (temp!=NULL){
            a+=to_string(temp->val);
            temp = temp->next;
        }
        string x = add(a);
        ListNode* heada = NULL;
        ListNode* tail = NULL;
        for (char i:x){
            ListNode* newNode = new ListNode(i-'0');
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
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

string add(string a, string b){
    string s;
    int i = a.size()-1, j = b.size()-1, c=0;
    while (i>=0 || j>=0 || c){
        int x = i>=0 ? a[i--]-'0' : 0;
        int y = j>=0 ? b[j--]-'0' : 0;
        int z = x+y+c;
        s += z%10 +'0';
        c = z/10;
    }
    reverse(s.begin(),s.end());
    return s;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string a;
        ListNode* temp1 = l1;
        while (temp1 != NULL){
            a+=to_string(temp1->val);
            temp1 = temp1->next;
        }

        string b;
        ListNode* temp2 = l2;
        while (temp2 != NULL){
            b+=to_string(temp2->val);
            temp2 = temp2->next;
        }

        string x = add(a,b);
        
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
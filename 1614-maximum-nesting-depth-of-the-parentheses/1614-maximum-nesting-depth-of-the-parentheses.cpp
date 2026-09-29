class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        int curr = 0;
        for (auto i:s){
            if (i=='('){
                curr++;
            }else if (i==')'){
                curr--;
            }
            if (curr>mx){
                mx = curr;
            }
        }
        return mx;
    }
};
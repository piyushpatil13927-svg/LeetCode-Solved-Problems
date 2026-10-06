class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for (int i=0;i<s.size();i++){
            if (s[i]!='*'){
                st.push(s[i]);
            }else if (s[i]=='*'){
                st.pop();
            }
        }
        string f;
        while (!st.empty()){
           f+=st.top();
           st.pop();
        }
        reverse(f.begin(),f.end());
        return f;
        
    }
};
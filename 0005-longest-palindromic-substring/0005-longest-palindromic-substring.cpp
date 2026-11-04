class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<string>ans;
        for (int i=0;i<n;i++){
           int l = i;
           int r = i;
           while (l>=0 && r<n && s[l]==s[r]){
             ans.push_back(s.substr(l,r-l+1));
             l--;
             r++;
           }

           l = i;
           r = i+1;
           while (l>=0 && r<n && s[l]==s[r]){
             ans.push_back(s.substr(l,r-l+1));
             l--;
             r++;
           }
           
        }
        int maxi = 0;
        for (string i:ans){
            int m = i.size();
            maxi = max(maxi,m);
        }
        string an = "";
        for (string i:ans){
           if (i.size()==maxi){
              an = i;
           }
        }
        return an;
    }
};
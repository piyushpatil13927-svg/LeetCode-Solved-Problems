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
            int size = i.size();
            maxi = max(maxi,size);
        }
        string an = "";
        for (string i:ans){
            int siz = i.size();
            if (siz == maxi){
                an = i;
                break;
            }
        }
        return an;

    }
};
bool pal(string& s, int i, int j){
    while (i<j)
        if (s[i++]!=s[j--]) return false;
    return true;
}

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while (left<right){
            if (s[left]!=s[right]){
                return pal(s,left+1,right) || pal(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};
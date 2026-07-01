class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
        for (int i=0;i<word.size();i++){
            if (isupper(word[i])){
                capital++;
            }
        }
        if (capital==word.size() || capital==0 || capital==1 && isupper(word[0])){
             return true;
        }else{
            return false;
        }
    }
};
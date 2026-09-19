class Solution {
public:
    int maxPower(string s) {
        vector<int>a;
        for (char j:s){
            int count=0;
            int maxi =0;
            for (int i=0;i<s.size();i++){
                if (s[i]==j){
                    count++;
                    maxi = max(maxi,count);
                }else{
                    count=0;
                }
            }
            a.push_back(maxi);
        }
        return *max_element(a.begin(),a.end());
    }
};
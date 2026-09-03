class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>a;
        for (vector<int> i:accounts){
            a.push_back(accumulate(i.begin(),i.end(),0));
        }
        return *max_element(a.begin(),a.end());
    }
};
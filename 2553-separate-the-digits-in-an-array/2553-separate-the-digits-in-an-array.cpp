class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string a;
        for (int i:nums){
            a+=to_string(i);
        }
        vector<int>x;
        for (char i:a){
            x.push_back(i-'0');
        }
        return x;
        
    }
};
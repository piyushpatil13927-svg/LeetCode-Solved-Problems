class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        long long a = nums.size()/3;
        unordered_map<int,int>freq;
        for (int i:nums){
            freq[i]++;
        }
        vector<int>x;
        for (auto p:freq){
            if (p.second > a){
               x.push_back(p.first);
            }
        }
        return x;
    }
};
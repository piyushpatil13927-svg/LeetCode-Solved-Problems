class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        for (int num:nums){
            um[num]++;
        }
        for (auto p : um){
            if (p.second>1){
                return p.first;
                break;
            }
        }
        return -1;
    }
};
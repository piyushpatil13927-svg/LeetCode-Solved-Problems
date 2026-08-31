class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int>a;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                a.push_back(abs(i-start));
            }
        }
        return *min_element(a.begin(),a.end());
    }
};
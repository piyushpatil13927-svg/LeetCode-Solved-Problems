class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (find(nums.begin(),nums.end(),target)!=nums.end()){
            return find(nums.begin(),nums.end(),target)-nums.begin();
        }else{
            return -1;
        }
    }
};
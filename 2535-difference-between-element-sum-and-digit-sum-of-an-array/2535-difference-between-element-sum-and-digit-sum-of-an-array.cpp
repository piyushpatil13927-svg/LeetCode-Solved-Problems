class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        string a;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            a+=to_string(nums[i]);
        }
        int suma=0;
        for (char i:a){
            suma+=(i-'0');
        }
        return abs(sum-suma);
        
    }
};
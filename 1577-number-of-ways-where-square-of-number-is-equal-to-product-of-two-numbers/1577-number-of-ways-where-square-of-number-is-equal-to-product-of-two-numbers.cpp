class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        for (int i:nums1){
            long long x = 1LL * i * i;
            for (int j=0;j<nums2.size();j++){
                for (int k=j+1;k<nums2.size();k++){
                    if (x == 1LL*nums2[j]*nums2[k]){
                        count++;
                    }
                }
            }
        }
        for (int i:nums2){
            long long x = 1LL * i * i;
            for (int j=0;j<nums1.size();j++){
                for (int k=j+1;k<nums1.size();k++){
                    if (x == 1LL*nums1[j]*nums1[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
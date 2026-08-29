class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        for (int i:nums1){
            if (find(nums2.begin(),nums2.end(),i)==nums2.end()){
                if (find(a.begin(),a.end(),i)==a.end()){
                    a.push_back(i);
                }
            }
        }
        vector<int>b;
        for (int i:nums2){
            if (find(nums1.begin(),nums1.end(),i)==nums1.end()){
                if (find(b.begin(),b.end(),i)==b.end()){
                    b.push_back(i);
                }
            }
        }
        vector<vector<int>>x = {a,b};
        return x;
    }
};
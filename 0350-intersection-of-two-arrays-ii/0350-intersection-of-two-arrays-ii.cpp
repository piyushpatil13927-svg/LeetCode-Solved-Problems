class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,vector<int>>b;
       for (int i=0;i<nums1.size();i++){
           if (find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end()){
               b[nums1[i]] = {(int)count(nums1.begin(),nums1.end(),nums1[i]),(int)count(nums2.begin(),nums2.end(),nums1[i])};
           }
       }
       vector<int>x;
       for (auto [key,val] : b){
           for (int i=0;i<min(val[0],val[1]);i++){
               x.push_back(key);
           }
       }
       return x;

        
    }
};
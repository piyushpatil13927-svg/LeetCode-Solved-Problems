class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>a;
        for (vector<int>i:matrix){
            a.insert(a.end(),i.begin(),i.end());
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};
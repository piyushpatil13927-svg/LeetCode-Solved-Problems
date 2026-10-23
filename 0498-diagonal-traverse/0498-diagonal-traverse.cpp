class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>ans(m+n-1);

        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                ans[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>a;
        for (int i=0;i<ans.size();i++){
            if (i%2==0 || i==0){
                vector<int>x = ans[i];
                reverse(x.begin(),x.end());
                a.insert(a.end(),x.begin(),x.end());
            }else{
                a.insert(a.end(),ans[i].begin(),ans[i].end());
            }
            
        }
        return a;
    }
};
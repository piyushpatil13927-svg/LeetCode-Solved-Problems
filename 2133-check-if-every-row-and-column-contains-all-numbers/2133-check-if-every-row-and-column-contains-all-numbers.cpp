class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for (vector<int>i:matrix){
            for (int j=1;j<=matrix.size();j++){
                if (find(i.begin(),i.end(),j)==i.end()){
                    return false;
                }
            }
        }
        vector<vector<int>>m;
        
        for (int i=0;i<matrix.size();i++){
            vector<int>a;
            for (int j=0;j<matrix.size();j++){
                a.push_back(matrix[j][i]);
            }
            m.push_back(a);
        }

        for (vector<int>i:m){
            for (int j=1;j<=m.size();j++){
                if (find(i.begin(),i.end(),j)==i.end()){
                    return false;
                }
            }
        }

        return true;
        
    }
};
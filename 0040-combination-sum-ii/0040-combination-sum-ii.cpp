class Solution {
public:

    vector<vector<int>> ans;
    vector<int> path;

    void back(int start,int total, vector<int>& candidates, int target){
        if (total==target){
            ans.push_back(path);
            return;
        }
        for (int i=start;i<candidates.size();i++){
            if (i>start && candidates[i]==candidates[i-1]){
                continue;
            }
            if (total>target){
                break;
            }
            path.push_back(candidates[i]);
            back(i+1,total+candidates[i],candidates,target);
            path.pop_back();
        }

    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        back(0,0,candidates,target);
        return ans;
        
    }
};
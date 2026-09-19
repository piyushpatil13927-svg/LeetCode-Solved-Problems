class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        int maxi = 0;
        for (int i=0;i<arr.size();i++){
            if (arr[i]%2!=0){
                count++;
                maxi = max(maxi,count);
            }else{
                count=0;
            }
        }
        if (maxi>=3){
            return true;
        }else{
            return false;
        }
    }
};
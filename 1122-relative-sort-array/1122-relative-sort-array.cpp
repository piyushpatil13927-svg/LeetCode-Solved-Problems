class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>a;
        for (int i=0;i<arr2.size();i++){
            for (int j=0;j<count(arr1.begin(),arr1.end(),arr2[i]);j++){
                a.push_back(arr2[i]);
            }
        }
        vector<int>b;
        for (int i=0;i<arr1.size();i++){
            if (find(a.begin(),a.end(),arr1[i])==a.end()){
                b.push_back(arr1[i]);
            }
        }
        sort(b.begin(),b.end());
        
        for (int i:b){
           a.push_back(i);
        }
        return a;
    }
};
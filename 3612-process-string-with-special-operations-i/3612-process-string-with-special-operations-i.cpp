class Solution {
public:
    string processStr(string s) {
        vector<char>result;
        for (char i : s){
            if (i!='*' && i!='#' && i!='%' ){
                result.push_back(i);
            }else if (i=='*'){
                if (!result.empty()){
                   result.pop_back();
                }
            }else if (i=='#'){
                result.insert(result.end(),result.begin(),result.end());
            }else{
                reverse(result.begin(),result.end());
            }

        }
        string re;

        // if (result.size()==0){
        //     return "";
        // }
        
        for (int i=0;i<result.size();i++){
            re+=result[i];
        }
        return re;
    }
};
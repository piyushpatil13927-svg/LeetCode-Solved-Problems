class Solution {
public:
    string customSortString(string order, string s) {
        string a;
        for (char i:order){
            if (s.find(i)!=string::npos){
                int x = count(s.begin(),s.end(),i);
                a.append(x,i);
            }
        }
        for (char j:s){
            if (find(order.begin(),order.end(),j)==order.end()){
                a+=j;
            }
        }
        return a;
    }
};
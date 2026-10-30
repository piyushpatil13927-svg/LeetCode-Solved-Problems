class Solution {
public:
    int calculateScore(int a, int b) {
        string s1 = bitset<32>(a).to_string();
        int count1 = 0;
        for (char i:s1){
            if (i=='1'){
                count1++;
            }
        }
        string s2 = bitset<32>(b).to_string();
        int count2 = 0;
        for (char i:s2){
            if (i=='1'){
                count2++;
            }
        }
        if (count1>=count2){
            return count1*count2;
        }else{
            return count2/count1;
        }
    }
};
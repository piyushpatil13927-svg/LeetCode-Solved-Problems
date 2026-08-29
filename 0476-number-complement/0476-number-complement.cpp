class Solution {
public:
    int findComplement(int num) {
        string a=bitset<32>(num).to_string().substr(bitset<32>(num).to_string().find('1'));
        string b;
        for (char i:a){
            if (i=='1'){
                b+='0';
            }else{
                b+='1';
            }
        }
        int x = stoi(b,NULL,2);
        return x;




    }
};
class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum = 0;
        int digitpro = 1;
        for (char i : to_string(n)){
            int digit = i - '0';
            digitsum+=digit;
            digitpro*=digit;
        }
        if ((n%(digitsum+digitpro))==0){
            return true;
        }else{
            return false;
        }
    }
};
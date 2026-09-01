class Solution {
public:
    int gcd(int a,int b){
            while (b!=0){
                int temp = b;
                b = a%b;
                a = temp;
            }
            return a;
        }
    int gcdOfOddEvenSums(int n) {
        int x = n+n;
        int even=0;
        int odd =0;
        for (int i=1;i<x+1;i++){
            if (i%2==0){
                even+=i;
            }else{
                odd+=i;
            }
        }
        return gcd(odd,even);
    }
};
// a = [0,1,1]
//         for i in range(n):
//             a.append(a[len(a)-1]+a[len(a)-2])
//         for i in range(len(a)):
//             if sum(a[i:i+3])==n:
//                 return True
//         return False

class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<long long>a = {0, 1, 1};
        while((a[a.size()-1]+a[a.size()-2])<n){
            a.push_back(a[a.size()-1]+a[a.size()-2]);
        }
        
        
        for (int i=0;i<a.size()-3+1;i++){
            if (accumulate(a.begin()+i,a.begin()+i+3,0)==n){
                return true;
            }else if(accumulate(a.begin()+i,a.begin()+i+3,0LL)>n){
                break;
            }
        }
        return false;
        
        

    }
};
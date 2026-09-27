class Solution(object):
    def maximumPrimeDifference(self, nums):
        def isPrime(a):
            if a==1:
                return False
            for i in range(2,10):
                if a%i==0 and a!=i:
                    return False 
            return True 
        x=[]
        for i in range(len(nums)):
            if isPrime(nums[i]) == True:
                x.append(i) 
      
        if len(x)<=1:
            return 0
       
        return max(x)-min(x)
            

        
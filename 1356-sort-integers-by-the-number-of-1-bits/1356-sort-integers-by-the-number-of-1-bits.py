class Solution(object):
    def sortByBits(self, arr):  
        arr.sort(key =lambda x: (bin(x).count("1"),x))
        return arr
        # ['0', '1', '10', '100', '1000', '11', '101', '110', '111']
        
class Solution:
    def findComplement(self, num: int) -> int:
        a = bin(num)[2:]
        b = ''
        for i in a:
            if i=='1':
                b+='0'
            else:
                b+='1'
        x = int(b,2)
        return x
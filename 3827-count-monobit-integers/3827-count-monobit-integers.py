class Solution(object):
    def countMonobit(self, n):
        b=[]
        for i in range(n+1):
            b.append(bin(i)[2:])
        count=0
        for i in b:
            if all(char==i[0] for char in i):
                count+=1
        return count


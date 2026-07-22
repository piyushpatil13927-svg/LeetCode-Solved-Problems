class Solution(object):
    def getRow(self, rowIndex):
        a=[]
        for i in range(rowIndex+1):
            row = [1] * (i+1)
            for j in range(1,i):
                row[j] = a[i-1][j-1] + a[i-1][j]
            a.append(row)
        return a[-1]

            

        
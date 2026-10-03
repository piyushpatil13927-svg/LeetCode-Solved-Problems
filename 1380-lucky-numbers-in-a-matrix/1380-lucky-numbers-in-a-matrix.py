class Solution(object):
    def luckyNumbers(self, matrix):
        a=[]
        for i in matrix:
            a.append(min(i))
        b=[]
        for i in range(len(matrix[0])):
            x=[]
            for j in range(len(matrix)):
                x.append(matrix[j][i])
            b.append(x) 
        z=[]
        for i in b:
            z.append(max(i))
        y=[]
        for i in z:
            if i in a:
                y.append(i)
        return y
                

                


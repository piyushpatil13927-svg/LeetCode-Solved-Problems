class Solution(object):
    def transpose(self, matrix):
        a=[]
        for i in range(len(matrix[0])):
            x=[]
            for j in range(len(matrix)):
                x.append(matrix[j][i])
            a.append(x)
        return a
        
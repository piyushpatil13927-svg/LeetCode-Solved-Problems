class Solution(object):
    def setZeroes(self, matrix):
        
        a=[]
        b=[]
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==0:
                    a.append(i)
                    b.append(j)
        for i in range(len(matrix)):
            for j in b:
                matrix[i][j] = 0 
        for i in a:
            matrix[i] = [0]*len(matrix[0])
        return matrix
                
        


                
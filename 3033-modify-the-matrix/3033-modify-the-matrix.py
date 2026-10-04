class Solution:
    def modifiedMatrix(self, matrix: List[List[int]]) -> List[List[int]]:
        a=[]
        for i in range(len(matrix[0])):
            x=[]
            for j in range(len(matrix)):
                x.append(matrix[j][i])
            a.append(x)
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == -1:
                    matrix[i][j] = max(a[j])
        return matrix
class Solution:
    def diagonalSum(self, mat: list[list[int]]) -> int:
        x=[]
        for i in range(len(mat)):
            x.append(mat[i][i])
            x.append(mat[len(mat)-1-i][i])
        if len(mat[0])%2!=0:
            x.remove(x[len(x)//2])
        return sum(x)

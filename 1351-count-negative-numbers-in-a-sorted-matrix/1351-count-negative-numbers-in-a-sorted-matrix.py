class Solution(object):
    def countNegatives(self, grid):
       
        a=sum(1 for row in grid for col in row if col<0)
        return a
        
class Solution(object):
    def findClosest(self, x, y, z):
        count1=0
        if x<=z:
            while x<=z:
                x+=1
                count1+=1
        else:
            while x>=z:
                x-=1
                count1+=1
                
        count2=0
        if y<=z:
            while y<=z:
                y+=1
                count2+=1
        else:
            while y>=z:
                y-=1
                count2+=1

        
        if count1>count2:
            return 2
        elif count2>count1:
            return 1
        else:
            return 0
        


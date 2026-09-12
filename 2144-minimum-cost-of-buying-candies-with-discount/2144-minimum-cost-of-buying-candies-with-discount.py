class Solution(object):
    def minimumCost(self, cost):
        cost.sort(reverse= True)
        # if len(cost)<3:
        #     return sum(cost)
        a=[]
        for i in range(0,len(cost),3):
            if len(cost[i:i+3])==3:
                a.append(sum(cost[i:i+3])-min(cost[i:i+3]))
            else:
                a.append(sum(cost[i:i+3]))
        # if len(a)%3!=0:

        return sum(a)


class Solution(object):
    def passwordStrength(self, password):
        pas=""
        for i in password:
            if i not in pas:
                pas+=i

        m="abcdefghijklmnopqrstuvwxyz"
        n="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        o="0123456789"
        p="!@#$"
        a=0
        for i in pas:
            if i in m:
                a+=1
            elif i in n:
                a+=2
            elif i in o:
                a+=3
            elif i in p:
                a+=5
        return a


        
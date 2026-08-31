class Solution:
    def processStr(self, s: str) -> str:
        a=[]
        for i in s:
            if i!="*" and i!='#' and i!="%":
                a.append(i)
            elif i=="*":
                if a:
                   a.pop()
            elif i=="#":
                a.extend(a)
            elif i=="%":
                a = a[::-1]
        b=""
        for i in a:
            b+=i


        if len(b)==0:
            return ""
        else:
            return b
            

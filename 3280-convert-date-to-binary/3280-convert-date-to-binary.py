class Solution(object):
    def convertDateToBinary(self, date):
        a = date.split("-")
        for i in range(len(a)):
            a[i] = bin(int(a[i]))[2:]
        b = ""
        for i in range(len(a)-1):
            b+=a[i]
            b+="-"
        b+=a[-1]
        return b

        
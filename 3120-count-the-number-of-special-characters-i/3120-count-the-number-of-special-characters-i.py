class Solution(object):
    def numberOfSpecialChars(self, word):
        w=''
        a = word.lower()
        for i in a:
            if i not in w:
                w+=i
        count=0
        for i in w:
            if i.lower() in word and i.upper() in word:
                count+=1 
        return count
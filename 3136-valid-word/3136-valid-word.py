class Solution(object):
    def isValid(self, word):
        char="#@$!%^&*"
        vowel = "aeiouAEIOU"
        if any(i in char for i in word):
            return False
        a=any(i in vowel for i in word) 
        b=any(i.isalpha() and i not in vowel for i in word) 
        c=any(i.isdigit() for i in word)

        count=0
        for i in word:
            if i.isalnum():
                count+=1
        if a and b and count>=3 and c:
            return True
        elif a and b and count>=3:
            return True
        else:
            return False
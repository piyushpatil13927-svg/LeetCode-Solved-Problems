class Solution:
    def interpret(self, command: str) -> str:
        a = list(command)
        
        for i in range(len(a)):
            if a[i]=='(' and a[i+1]==')':
                a[i:i+1]='o'
        
        b=''
        for i in a:
            if i!='(' and i!=')':
                b+=i
        return b






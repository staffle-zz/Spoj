def do(c,n,s):
    i=0
    while(i!=n):
        if s[i]== '+':
            c+=1
            i+=1
        if s[i]== '.':
            print(c,end="")
            i+=1
        elif s[i]=='-':
            c-=1
            i+=1
        elif s[i]== '[':
            print(i)
            lo=[]
            sz=0
            i+=1
            while(s[i]!=']'):
                lo.append(s[i])
                sz+=1
                i+=1
            print(lo)
            while(c):
                do(c,sz,lo)

        elif s[i]==']':
            i+=1




s=input()
c=0
n=len(s)
do(c,n,list(s))


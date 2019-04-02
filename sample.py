n=int(input())
l=list(map(int,input().split()))
def solve():
    pa=[n,n//2,n//4,n//8,n//16]
    ans=1
    for i in range(0,5):  ''' for(int i=0;i<5;i++) a[i] '''
        if pa[i]!=0:
            for j in range(0,n,pa[i]):
                if(l[j:j+pa[i]]==sorted(l[j:j+pa[i]])):
                    print(pa[i])
                    return

    else:
        print(1)
        return
solve()
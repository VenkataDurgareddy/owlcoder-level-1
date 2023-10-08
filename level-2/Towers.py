n=int(input())
t=[-1]*n
l=list(map(int,input().split()))
c=0
while(l!=t):
    p=-1
    for i in range(n):
        if p==-1 and l[i]!=-1:
            p=l[i]
            l[i]=-1
        elif p!=-1 and l[i]!=-1 and p>l[i]:
            p=l[i]
            l[i]=-1
    c+=1
print(c)

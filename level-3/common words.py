m=list(map(str,input().lower().split()))
n=list(map(str,input().lower().split()))
for i in n:
    if i in m:
        print(i,end=" ")

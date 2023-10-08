***Check prefix match ***
n=int(input())
arr=list(map(str,input().split()))
k=int(input())
s=input()
c=0
for i in range (n):
    a=arr[i]
    if(a[:k]==s[:k]):
        c=c+1;
print(c)

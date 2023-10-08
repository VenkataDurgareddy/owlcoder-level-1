*****Next palindrome*****
def palin(x):
    v = x
    s = 0
    while(v!=0):
        d = v%10
        s = (s*10)+d 
        v = v//10
    if s == x:
        return True
    else:
        return False
n = int(input())
for i in range(n+1,(10**9)+1):
    if palin(i):
        print(i)
        break

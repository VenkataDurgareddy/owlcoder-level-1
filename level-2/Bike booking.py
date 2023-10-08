***Bike booking ****
N=int(input())
pos=int(input())
bike=list(map(int,input().split()))
time_ta=list(map(int,input().split()))
mine=9999999999999
for i in range(N):
    dis=abs(pos-bike[i])
    ti=dis*time_ta[i]
    mine=min(mine,ti)
print(mine)

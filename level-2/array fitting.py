def can_fit(arr, brr):
    arr.sort()
    brr.sort()
    
    for i in range(len(arr)):
        if arr[i] > brr[i]:
            return "NO"
    
    return "YES"

# Input the size of the arrays
n = int(input())

# Input the elements of arr and brr
arr = list(map(int, input().split()))
brr = list(map(int, input().split()))

result = can_fit(arr, brr)
print(result)

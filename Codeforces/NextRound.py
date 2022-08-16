import array
n, k = list(map(int, input().split()))
arr = [n]
for i in range(0, n):
    arr[i] = int(input())
temp = arr[k-1]
count=0
for i in range(0, n):
    if arr[i]>=temp and arr[i]!=0:
        count+=1
print(count)

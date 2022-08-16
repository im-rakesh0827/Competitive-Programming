t = int(input())
num=0
for i in range(0, t):
    a, b, c = list(map(int, input().split()))
    sum=a+b+c
    if sum>=2:
        num+=1
print(num)
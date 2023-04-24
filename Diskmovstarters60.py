t=int(input())
for _ in range(t):
    n=list(map(int,input().strip().split(" ")))[:2]
    k=n[1]
    n=n[0]
    arr= list(map(int,input().strip().split(" ")))[:n]
    c=[]
    for i in range(1,2*n+1):
        c.append(i)
    c=set(c)
    arr=set(arr)
    c=c-arr
    c=list(c)
    c.sort()
    arr=list(arr)
    if 2*n in arr:
        print(k*max(arr)-sum(c[0:k]))
    elif 2*n not in arr:
        u=(k-1)*2*n-sum(c[0:k-1])
        v=k*max(arr)-sum(c[0:k])
        print(max(u,v))
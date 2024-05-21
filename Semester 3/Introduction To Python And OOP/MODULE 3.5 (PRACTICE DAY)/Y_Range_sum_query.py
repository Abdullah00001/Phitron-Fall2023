N,Q=map(int,input().split())

A=list(map(int,input().split()))

while Q>0:
    sum=0
    L,R=map(int,input().split())
    
    for i in range(L-1,R):
        sum+=A[i]
    print(sum)
    Q-=1
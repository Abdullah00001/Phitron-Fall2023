T=int(input())

while T>0:
    N=int(input())
    A=[]
    A=list(map(int,input().split()))
    smallestPair=float('inf')
    for i in range(N):
        for j in range(i+1,N):
            crntSum=A[i]+A[j]+j-i
            smallestPair=min(smallestPair,crntSum)
    print(smallestPair)
    T-=1
N=int(input())
A=list(map(int,input().split()))
minOperation=0
while True:
    isEven=True
    for i in range(len(A)):
        if A[i]%2!=0:
            isEven=False
            break
    if isEven:
        for i in range(len(A)):
            A[i]//=2
        minOperation+=1
    else:
        break
print(minOperation)
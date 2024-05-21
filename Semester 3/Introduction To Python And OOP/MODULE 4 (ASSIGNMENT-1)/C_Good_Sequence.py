from collections import Counter
N=int(input())
A=list(map(int,input().split()))
freq=Counter(A)
removeCnt=0

for number,count in freq.items():
    if count>number:
        removeCnt+=count-number
    elif count<number:
        removeCnt+=count

print(removeCnt)
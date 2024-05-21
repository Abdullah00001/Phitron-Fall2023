N=int(input())

L =list(map(int, input().split()))

max_Index=L.index(max(L))
min_Index=L.index(min(L))

temp=L[max_Index]
L[max_Index]=L[min_Index]
L[min_Index]=temp

for num in L:
    print(num,end=" ")
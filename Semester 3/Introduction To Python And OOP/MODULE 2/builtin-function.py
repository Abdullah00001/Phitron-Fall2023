arr=[10,20,30,40]

highest=max(arr)
lowest=min(arr)
count=len(arr)
total=sum(arr)

print(highest,lowest,count,total)

def any(arr):
    for num in arr:
        if num:
            return True
    return False
br=['ami','jabo']
print(any(br))
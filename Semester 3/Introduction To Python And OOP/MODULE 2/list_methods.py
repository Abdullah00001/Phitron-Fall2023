arr=[90,20,50,10]

arr.append(40)
print(arr)

arr.insert(1,68)

print(arr)

arr.remove(10)
print(arr)

num=int(input())

if num in arr:
    arr.remove(num)
else:
    print('the number you entered its not exist')

print(arr)

last=arr.pop()
print(last,'\n',arr)
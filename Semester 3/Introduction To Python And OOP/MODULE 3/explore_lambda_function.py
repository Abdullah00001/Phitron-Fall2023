sum=lambda num,num1:num+num1
multi=lambda num,num1:num*num1
devide=lambda num,num1:num//num1
mul=lambda num:num*2
""" print(sum(10,30))
print(multi(10,30))
print(devide(90,30)) """

number=[12,45,67,12,90,13,47,13]

mul_num=map(mul,number)

""" print(list(mul_num)) """

books=[
    {'name':'groing throwgh','price':350},
    {'name':'habluder programming','price':250},
    {'name':'programming er ma','price':150},
    {'name':'dsa','price':450},
    {'name':'python','price':550}
]

lowRange=filter(lambda book:book['price']<350,books)
highRange=filter(lambda book:book['price']>350,books)

print(list(lowRange))
print(list(highRange))




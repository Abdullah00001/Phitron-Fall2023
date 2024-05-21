# list --> []
# tuple --> ()
# set --> {}
# set is a data structure who doesnt store duplicate values
# set is unorderd data strucre who didnt follow sequence like list,tuple
number=[12,45,67,12,90,13,47,13]
print(number)

number_set=set(number)
print(number_set)

number_set.add(91)
print(number_set)

number_set.remove(45)
print(number_set)

for item in number_set:
    print(item)
    
if 91 in number_set:
    print('Bow tmi Kthay')

a={10,5,7,8,1,4}
b={6,7,8,9,3,2}

print(a & b) # a cap b (only take common values from a and b)
print(a | b) # a cup b (takes all values from a and b)

d={10,20,10,30,40}
print(d)
def pir(first_name,last_name):
    name=f'{first_name} {last_name}'
    return name

murid=pir('alu','potol')

print(murid)

def celebrity(first,last,**others):
    name=f'{first} {last}'
    print(others)
    return name

name=celebrity(first='kamal',last='jamal',title='sovapoti',address='dhaka')
print(name)

""" retrurn multiples things from function """

def mul(num,num1):
    sum=num+num1
    remain=num-num1
    mult=num*num1
    # return sum,remain,mult
    return [sum,remain,mult]

things=mul(50,30)

print(things)
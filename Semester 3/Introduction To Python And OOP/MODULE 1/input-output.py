""" print('now i need money')
money=input()
print(money) """

""" balance=input('deposite ammount : ')

print("Congratulation! ",balance, " tk deposite successful") """

""" ======================================================
---By Default input() function take in string---
=========================================================== """

""" Deposite=int(input('Deposite Ammount : '))
print('Congratulation',Deposite,'Sucess')
Cashout=int(input('Cashout Ammount : '))
Balance=Deposite+Cashout
print(Cashout,' Tk Successful','Current Balance : ',Balance)
print(Deposite,Cashout) """

balance_int=int(input())
balance_float=float(input())

balance_int=float(balance_int)
print(type(balance_int),balance_int)

balance_float=int(balance_float)
print(type(balance_float),balance_float)

in_str=str(balance_int)
print(type(in_str),in_str)


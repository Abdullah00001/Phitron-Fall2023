from time import *
import threading


class Bank:
    def __init__(self, bank_Name, balance):
        self.bank_Name = bank_Name
        self.balance = balance
        self.min_Deposite = 500
        self.max_Deposite = 120000
        self.min_Withdraw = 500
        self.max_Withdraw = 10000

    def checkBalance(self):
        return self.balance

    def deposite(self, amount):
        if self.min_Deposite <= amount:
            if amount <= self.max_Deposite:
                self.balance += amount
                return f"Congratulation!\n{amount} TK Deposite Successfull\nYour Current Balance Is {self.balance}"
            else:
                return f"Sorry.You Cant Deposite More Than {self.max_Deposite} TK At A Time"
        else:
            return f"Sorry.Your Amount Is Too Low.\nYou Cant Deposite Less Than {self.min_Deposite} Tk\n"

    def withdraw(self, amount):
        if self.min_Withdraw <= amount:
            if amount <= self.max_Withdraw:
                self.balance -= amount
                return f"Congratulation!\n{amount} TK Withdraw Successfull\nYour Current Balance Is {self.balance}"
            else:
                return f"Sorry.You Cant Withdraw More Than {self.max_Withdraw} TK At A Time"
        else:
            return f"Sorry.Your Amount Is Too Low.\nYou Cant Withdraw Less Than {self.min_Withdraw} Tk\n"


print(f"Please Enter Your Bank Name And Balance")
BankName = input()
Balance = int(input())
Client = Bank(BankName, Balance)

while True:
    print(
        f"Wllcome To {BankName}\nOption 01: Deposite\nOption 02: Withdraw\nOption 03: Check Balance\nOption 04: Exit"
    )
    option = int(input())

    if option == 1:
        print("Please Enter Your Ammount To Deposite")
        amount = int(input())
        Massage = Client.deposite(amount)
        print(Massage)
    elif option == 2:
        print("Please Enter Your Ammount To Withdraw")
        amount = int(input())
        Massage = Client.withdraw(amount)
        print(Massage)
    elif option == 3:
        print(f"Dear Customer\nYour Current Ballance Is {Client.checkBalance()} Tk")
    elif option == 4:
        print("Thanks For With Us\nHave A Great Day")
        break

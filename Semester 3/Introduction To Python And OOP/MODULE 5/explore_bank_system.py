class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.minWithdraw = 500
        self.minDeposite = 500

    def deposite(self, amount):
        if amount > self.minDeposite:
            self.balance += amount
            print(f"{amount} add successful")
        else:
            print("sorry amount is too low")

    def withdraw(self, amount):
        if amount > self.minWithdraw:
            self.balance -= amount
            print(f"{amount} withdraw successful")
        else:
            print("amount is too low")

    def getBalance(self):
        print(self.balance)


isbl = Bank(15000)
while True:
    print(
        f"option 0: deposite\noption 1: withdrw\noption 2: check balance\noption 3: exit"
    )
    options = int(input())

    if options == 0:
        amount = int(input())
        isbl.deposite(amount)
    elif options == 1:
        amount = int(input())
        isbl.withdraw(amount)
    elif options == 2:
        isbl.getBalance()
    elif options == 3:
        print("thanks.\nstay with us")
        break

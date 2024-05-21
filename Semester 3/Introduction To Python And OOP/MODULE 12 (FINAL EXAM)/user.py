import random


class User:
    def __init__(self, name, email, address):
        self.name = name
        self.email = email
        self.address = address


class Client(User):
    def __init__(self, name, email, address, accountType):
        self.accountType = accountType
        self.balance = 0
        self.__transactionHistory = []
        self.__accountNumber = random.randint(1, 100) + 999
        super().__init__(name, email, address)

    """ def createUser(self, userInfo, bank):
        bank.create_User_Account(userInfo) """

    def History(self):
        print("====================")
        for historyInfo in self.__transactionHistory:
            for key,value in historyInfo.items():
                print(f"{key} : {value}")
        print("====================")
    
    def deposite(self, amount, bank):
        bank.balance += amount
        self.balance += amount
        print(f"Deposite {amount} Successful")
        self.__transactionHistory.append(
            {"Operation": "Deposite", "Amount": amount, "Current Balance": self.balance}
        )

    def withdraw(self, amount, bank):

        if self.balance < amount:
            print(f"Withdrawal amount exceeded")
        else:
            self.balance -= amount
            bank.balance -= amount
            self.__transactionHistory.append(
                {
                    "Operation": "Withdraw",
                    "Amount": amount,
                    "Current Balance": self.balance,
                }
            )
            print(f"{amount} Withdraw Successful")

    def checkBalance(self):
        print(f"Your Current Balance Is {self.balance}")

    def takeLoan(self, amount, bank):
        loanCount = 2
        maxLoan_Amount = 100000
        minLoan_Amount = 10000
        if loanCount > 0:
            if amount >= minLoan_Amount and amount <= maxLoan_Amount:
                if bank.balance > amount:
                    if bank.loan:
                        bank.total_Loan += amount
                        print(f"Your Requested Amount Of Loan {amount} Is Granted")
                        loanCount -= 1
                    else:
                        print("Sorry Your Loan Status Is Of Currently")

                else:
                    print("Sorry Insufficient funds")
            else:
                print(f"Sorry You Requested Amount {amount} Is Out Of Our Limit")
        else:
            print(f"Sorry Youre Use Your Maximum Attempt Of Loan")

    def sendMoney(self, reciever_email, amount, bank):
        bank.transferAmmount(self.email, reciever_email, amount)


class Admin(User):
    def __init__(self, name, email, address):
        super().__init__(name, email, address)

    def createAdmin(self, adminInfo, bank):
        bank.create_Admin_Account(adminInfo)

    def remove_User(self, userEmail, bank):
        bank.deleteAccount(userEmail)

    def view_User_List(self, bank):
        bank.userList()

    def view_Admin_List(self, bank):
        bank.adminList()

    def chackStock(self, bank):
        bank.bank_Balance()

    def checkLoanAmount(self, bank):
        bank.loan_Balance()

    def set_Loan_Status(self, status, bank):
        bank.loanStatus(status)

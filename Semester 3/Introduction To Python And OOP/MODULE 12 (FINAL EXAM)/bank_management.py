import random


class Bank:
    def __init__(self, name) -> None:
        self.name = name
        self.__userAccountList = []
        self.__adminAccountList = []
        self.balance = 0
        self.total_Loan = 0
        self.loan = False

    def finduser(self, email):
        for userAcc in self.__userAccountList:
            if email == userAcc.email:
                return userAcc
        return None

    def findAdmin(self, email):
        for adminAcc in self.__adminAccountList:
            if email == adminAcc.email:
                return True
        return False

    def transferAmmount(self, sender_email, reciever_email, amount):
        sender = self.finduser(sender_email)
        reciever = self.finduser(reciever_email)

        if sender is not None and reciever is not None:
            if sender.balance > amount:
                reciever.balance += amount
                sender.balance -= amount
                print(
                    f"From {sender_email}\nTo {reciever_email}\n{amount} Tk Transfer Succesful"
                )
            else:
                print("Insufficient funds")
        else:
            print("Account Not Found")

    def create_User_Account(self, user):
        self.__userAccountList.append(user)
        print("Account created successfully.")

    def create_Admin_Account(self, admin):
        self.__adminAccountList.append(admin)
        print("Account created successfully.")

    def deleteAccount(self, email):
        for userAcc in self.__userAccountList:
            if email == userAcc.email:
                self.__userAccountList.remove(userAcc)
                print("Account deleted successfully.")
            else:
                print(f"user Not Found")

    def userList(self):
        for userAcc in self.__userAccountList:
            print(f"User Name: {userAcc.name}\tUser Email: {userAcc.email}")

    def adminList(self):
        for userAcc in self.__adminAccountList:
            print(f"User Name: {userAcc.name}\tUser Email: {userAcc.email}")

    def bank_Balance(self):
        print(self.balance)

    def loan_Balance(self):
        print(self.total_Loan)

    def loanStatus(self, status):
        if status == "on":
            self.loan = True
            print(f"Loan Status On")
        elif status == "off":
            self.loan = False
            print(f"Loan Status Off")


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

    def History(self):
        print("====================")
        for historyInfo in self.__transactionHistory:
            for key, value in historyInfo.items():
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


baper_Bank = Bank("Dadar Bank")
Manager = Admin("abdullah", "abdullah@gmail.com", "dhaka")
Manager.createAdmin(Manager, baper_Bank)


def adminMenu():

    while True:
        print(f"Welcome To Admin Dashboard")
        print(
            f"Option 1 : Create New Admin\nOption 2 : Remove User\nOption 3 : View Admins\nOption 4 : View User\nOption 5 : Bank Stock\nOption 6 : Loan Balance\nOption 7 : Set Loan Status\nOption 8 : Exit"
        )

        Option = int(input("Please Insert An Option : "))

        if Option == 1:
            adminName = input("Type Admin Name : ").lower()
            adminEmail = input("Type Admin Email : ").lower()
            adminAddress = input("Type Admin Address : ").lower()
            if baper_Bank.findAdmin(adminEmail):
                print("Sorry This Email Allready Exist")
            else:
                newAdmin = Admin(adminName, adminEmail, adminAddress)
                Manager.createAdmin(newAdmin, baper_Bank)

        elif Option == 2:
            userEmail = input("Type User Email ")
            Manager.remove_User(userEmail, baper_Bank)
        elif Option == 3:
            Manager.view_Admin_List(baper_Bank)
        elif Option == 4:
            Manager.view_User_List(baper_Bank)
        elif Option == 5:
            Manager.chackStock(baper_Bank)
        elif Option == 6:
            Manager.checkLoanAmount(baper_Bank)
        elif Option == 7:
            print(f"Loan Status\n On/Off")
            status = input("type on or off ").lower()
            Manager.set_Loan_Status(status, baper_Bank)
        elif Option == 8:
            print("Exiting.....")
            print("Exit")
            return
        else:
            print("Invalid Input")


def userMenu(client):
    while True:
        print(f"Welcome To User Dashboard")
        print(
            f"Option 1 : Deposite\nOption 2 : Withdraw\nOption 3 : Check Balance\nOption 4 : Take Loan\nOption 5 : Send Money\nOption 6 : History\nOption 7 : Exit"
        )
        Option = int(input("Please Insert An Option : "))
        if Option == 1:
            print(f"Enter Your Amount For Deposite")
            amount = int(input("Amount "))
            client.deposite(amount, baper_Bank)
        elif Option == 2:
            print(f"Enter Your Amount For Withdraw")
            amount = int(input("Amount "))
            client.withdraw(amount, baper_Bank)
        elif Option == 3:
            client.checkBalance()
        elif Option == 4:
            print(f"Enter Your Amount For Take Loan")
            amount = int(input("Amount "))
            client.takeLoan(amount, baper_Bank)
        elif Option == 5:
            print(f"Please EnterReciever Email And Amount For Send Money")
            r_email = input("Reciever Email : ")
            amount = int(input("Amount "))
            client.sendMoney(r_email, amount, baper_Bank)
        elif Option == 6:
            client.History()
        elif Option == 7:
            print("Exiting.....")
            print("Exit")
            break
        else:
            print("Invalid Input")


def adminLogin():
    while True:
        print(f"Please Login First")
        email = input("Please Enter Your Email ")
        if baper_Bank.findAdmin(email):
            adminMenu()
            return
        else:
            print("Email Not Exist")
            return


def clientSide():
    while True:
        print(
            f"Choose An Option\nOption 1 : Login\nOption 2 : Sign Up\nOption 3 : Exit"
        )
        Option = int(input())
        if Option == 1:
            print(f"Please Login First")
            email = input("Please Enter Your Email ")
            if baper_Bank.finduser(email) is not None:
                userMenu(baper_Bank.finduser(email))
            else:
                print("Email Not Exist")
        elif Option == 2:
            print("Create Your Account")
            print("Name")
            userName = input("Type User Name : ").lower()
            print("Email")
            userEmail = input("Type User Email : ").lower()
            print("Address")
            userAddress = input("Type User Address : ").lower()
            print("Account Type : 'Savings'/'Current'")
            accountType = input("Account type : ").lower()
            if baper_Bank.finduser(userEmail) is not None:
                print(f"Sorry {userEmail} Already Exist")
            else:
                client = Client(userName, userEmail, userAddress, accountType)
                baper_Bank.create_User_Account(client)
                userMenu(client)
        elif Option == 3:
            break


while True:
    print(f"Wellcome To {baper_Bank.name}")
    print(f"Choose An Option\nOption 1 : Admin\nOption 2 : User\nOption 3 : Exit")
    Option = int(input())

    if Option == 1:
        adminLogin()
    elif Option == 2:
        clientSide()
    elif Option == 3:
        break
    else:
        print("Invalid Input")

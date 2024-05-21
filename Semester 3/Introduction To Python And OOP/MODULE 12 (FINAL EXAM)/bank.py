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
    
    def findAdmin(self,email):
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

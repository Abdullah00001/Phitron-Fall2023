from user import Client, Admin
from bank import Bank


baper_Bank = Bank("Dadar Bank")
Manager = Admin("abdullah", "abdullah@gmail.com", "dhaka")
Manager.createAdmin(Manager,baper_Bank)


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
            userEmail = input("Type User Email")
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

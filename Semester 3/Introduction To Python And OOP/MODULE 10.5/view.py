from shope import Shop
from products import Product


def mainMenu():
    print(f"=============================")
    print(f"\tWELLCOME TO DARAZ")
    print(f"=============================\n")
    print(f"--------------------------------")
    print(f"Please Choose And Option")
    print(f"Option 1 : Log In\nOption 2 : Sign Up\nOption 3 : Exit")


def buyerDashboard(name):
    print(f"Wellcome {name.capitalize()}\nExiciting Offers Are Waiting For You")
    print(f"Chose And Option")
    print(f"Option 1 : Viwe Products\nOption 2 : Add To Cart\nOption 3 : Place Order")


def sellerDashboard(name):
    print(
        f"Wellcome {name.capitalize()}\nLets Attract The Customers With The Exciting Deals"
    )
    print(f"Chose And Option")
    print(
        f"Option 1 : Add An Product\nOption 2 : Remove An Product\nOption 3 : Viwe Products\nOption 4 : Viwe Orders"
    )


showMenu = True
showDashboard = True
Daraz = Shop()
while True:
    if showMenu:
        mainMenu()
    option = int(input())
    if option == 1:
        showMenu = False
        print("\n")
        print(f"Login As A \nOption 1 : Buyer\nOption 2 : Seller")
        loginOption = int(input())
        if loginOption == 1:
            showMenu = False
            print("Log In As A Buyer")
            print(f"Please Enter Your Email And Password\n")
            email = input().lower()
            password = input().lower()
            if Daraz.buyerValid(email, password):
                print(f"\nOPTION 1 : Go To DashBoard\nOPTION 2 : Main Menu")
                profile = int(input())
                if profile == 1:
                    if showDashboard:
                        showMenu = False
                        buyerDashboard(Daraz.buyers[email].name)
                elif profile == 2:
                    showDashboard = False
                    mainMenu()
            else:
                showMenu = True
        elif loginOption == 2:
            print("Log In As A Seller")
            print(f"Please Enter Your Email And Password")
            email = input().lower()
            password = input().lower()
            if Daraz.sellerValid(email, password):
                print(f"\nOPTION 1 : Go To DashBoard\nOPTION 2 : Main Menu")
                profile = int(input())
                if profile == 1:
                    if showDashboard:
                        showMenu = False
                        sellerDashboard(Daraz.sellers[email].name)
                        sales = Daraz.sellers[email]
                        d_Board = int(input())
                        if d_Board == 1:
                            print(f"Product Name\tProduct Price\tProduct Quantity")
                            p_Name = input()
                            p_price = int(input())
                            p_Quantity = int(input())
                            item = Product(p_Name, p_price, p_Quantity)
                            sales.addItem(item)
                        elif d_Board == 2:
                            print(f"Enter Product Name To Remove")
                            itemName = input()
                            sales.removeItem(itemName)
                        elif d_Board == 3:
                            print(f"Here Is Your Stocks")
                            sales.viewItems()
                elif profile == 2:
                    showDashboard = False
                    mainMenu()
            else:
                showMenu = True
    elif option == 2:
        showMenu = False
        print("\n")
        print(f"To Sign Up Please Choose Your User Type")
        print(f"option 1 : Buyer\noption 2 : Seller\noption 3 : Main Menu")
        signUpoption = int(input())
        if signUpoption == 1:
            print(f"Sign Up As A Buyer")
            print(f"Enter Your name, email, password, balance")
            name = input().lower()
            email = input().lower()
            password = input().lower()
            balance = int(input())
            Daraz.addBuyer(name, email, password, balance)
            print(f"\nOPTION 1 : Go To DashBoard\nOPTION 2 : Main Menu")
            profile = int(input())
            if profile == 1:
                if showDashboard:
                    showMenu = False
                    buyerDashboard(name)
            elif profile == 2:
                showDashboard = False
                mainMenu()
        elif signUpoption == 2:
            print(f"Sign Up As A Seller")
            print(f"Enter Your name, email, password, shopID")
            name = input().lower()
            email = input().lower()
            password = input().lower()
            shopID = int(input())
            Daraz.addSeller(name, email, password, shopID)
            sales = Daraz.sellers[email]
            print(f"\nOPTION 1 : Go To DashBoard\nOPTION 2 : Main Menu")
            profile = int(input())
            if profile == 1:
                if showDashboard:
                    showMenu = False
                    sellerDashboard(name)
                    d_Board = int(input())
                    if d_Board == 1:
                        print(f"Product Name\tProduct Price\tProduct Quantity")
                        p_Name = input()
                        p_price = int(input())
                        p_Quantity = int(input())
                        item = Product(p_Name, p_price, p_Quantity)
                        sales.addItem(item)
                    elif d_Board == 2:
                        print(f"Enter Product Name To Remove")
                        itemName = input()
                        sales.removeItem(itemName)
                    elif d_Board == 3:
                        print(f"Here Is Your Stocks")
                        sales.viewItems()
            elif profile == 2:
                showDashboard = False
                mainMenu()
        elif signUpoption == 3:
            print("\n")
            showMenu = True
    elif option == 3:
        print("\nThanks For Shoping From Us")
        break
